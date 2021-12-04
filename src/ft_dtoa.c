/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:24:59 by dpiza             #+#    #+#             */
/*   Updated: 2021/12/04 17:32:19 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dtoa(double n, int p)
{
	char	*ret;
	int		i;

	i = 0;
	ret = ft_itoa((int)n);
	add_char(&ret, ',');
	if (n < 0)
		n *= -1;
	while (i < p)
	{
		n /= 0.1;
		add_char(&ret, (int)n % 10 + '0');
		i++;
	}
	return (ret);
}
