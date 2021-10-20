/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:29:55 by dpiza             #+#    #+#             */
/*   Updated: 2021/10/19 23:13:08 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ilittle;

	ilittle = ft_strlen(little);
	if (!ilittle)
		return ((char *)big);
	if (ilittle > ft_strlen(big))
		return (NULL);
	while (*big && len)
	{
		if (ilittle > ft_strlen(big) || len < ilittle)
			return (NULL);
		if (ft_strncmp(big, little, ilittle) == 0 && len >= ilittle)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
