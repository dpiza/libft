/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:42:43 by dpiza             #+#    #+#             */
/*   Updated: 2021/10/19 23:14:41 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;

	d = dest;
	if (!src && !dest)
		return (NULL);
	while (n > 0)
	{
		*(char *)d = *(char *)src;
		d++;
		src++;
		n--;
	}
	return (dest);
}
