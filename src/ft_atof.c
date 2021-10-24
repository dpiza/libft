/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:51:31 by dpiza             #+#    #+#             */
/*   Updated: 2021/10/24 23:49:38 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

float	ft_atof(const char *nptr)
{
	float	ret;
	float	signal;
	float	dec;

	ret = 0;
	dec = 1;
	signal = 1;
	while (ft_isspace(*nptr) || *nptr == '-')
	{
		if (*nptr == '-')
			signal = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr) || *nptr == '.')
	{
		if (*nptr == '.' && dec == 1)
			dec = 0.1;
		else
		{
			ret *= dec * 10;
			ret += dec * (*nptr - 48);
		}
		nptr++;
	}
	return (ret * signal);
}
