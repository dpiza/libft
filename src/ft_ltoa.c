/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:38:37 by dpiza             #+#    #+#             */
/*   Updated: 2021/12/04 17:33:18 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_longlen(long n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	ft_lisnegative(long n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*ft_ltoa(long n)
{
	char	*ret;
	int		negative;
	int		len;
	int		i;
	long	nb;

	i = 0;
	negative = ft_lisnegative(n);
	nb = n;
	if (nb < 0)
		nb *= -1;
	len = ft_longlen(nb);
	ret = (char *)malloc((len + negative + 1) * sizeof(char));
	if (!ret)
		return (ret);
	if (negative)
		ret[i] = '-';
	while (nb > 0 || (i == 0 && nb == 0))
	{
		ret[len - 1 + negative - i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	ret[len + negative] = '\0';
	return (ret);
}
