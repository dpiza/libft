/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:53:56 by dpiza             #+#    #+#             */
/*   Updated: 2021/10/19 23:12:51 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	char	*tdest;
	size_t	size;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		size = 0;
	else if (ft_strlen(s) - start < len)
		size = ft_strlen(s) - start;
	else
		size = len;
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	tdest = dest;
	s += start;
	while (*s && size > 0)
	{
		*tdest++ = *s++;
		size--;
	}
	*tdest = '\0';
	return (dest);
}
