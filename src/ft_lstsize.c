/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 12:34:00 by dpiza             #+#    #+#             */
/*   Updated: 2021/12/04 17:33:14 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*tracker;

	if (!lst)
		return (-1);
	counter = 0;
	tracker = lst->next;
	while (tracker)
	{
		tracker = tracker->next;
		counter++;
	}
	return (counter);
}
