/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:51:31 by dpiza             #+#    #+#             */
/*   Updated: 2021/12/04 17:32:00 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

float	ft_atof(const char *str)
{
	float	ret;
	float	sign;
	float	dec;
	int		i;

	ret = 0.0;
	dec = 0.0;
	sign = 1.0;
	while (ft_isspace(*str) || *str == '-')
	{
		if (*str == '-')
			sign = -1.0;
		str++;
	}
	while (ft_isdigit(*str))
		ret = ret * 10 + (*str++ - '0');
	i = -1;
	if (*str == '.' && *str++)
	{
		while (ft_isdigit(*str))
			dec += (pow(10, i--) * (*str++ - '0'));
	}
	return (sign * (ret + dec));
}
