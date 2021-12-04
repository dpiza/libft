/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 12:48:16 by dpiza             #+#    #+#             */
/*   Updated: 2021/12/04 17:32:53 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*del_member;
	t_list	*next_member;

	if (!lst)
		return ;
	del_member = *lst;
	while (del_member)
	{
		next_member = del_member->next;
		(*del)(del_member);
		free(del_member);
		del_member = next_member;
	}
	lst = NULL;
}
