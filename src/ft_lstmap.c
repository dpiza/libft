/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:03:36 by dpiza             #+#    #+#             */
/*   Updated: 2021/12/04 17:33:06 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*element;

	if (!lst)
		return (NULL);
	new_lst = 0;
	while (lst)
	{
		element = ft_lstnew((*f)(lst->content));
		if (!element)
		{
			ft_lstclear(&new_lst, (*del));
		}
		ft_lstadd_back(&new_lst, element);
		lst = lst->next;
	}
	ft_lstiter(lst, (*f)(lst->content));
	return (new_lst);
}
