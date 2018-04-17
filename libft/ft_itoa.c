/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 14:04:57 by passef            #+#    #+#             */
/*   Updated: 2018/01/03 20:48:55 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_itoalen(long n)
{
	int i;

	i = 1;
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char		*ft_str(long nb, int len, int neg)
{
	char *str;
	int i;

	i = len;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i--;
	while (nb / 10 != 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	str[i] = nb % 10 + '0';
	i--;
	if (neg == 1)
		str[i] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	char *str;
	int i;
	int neg;
	long nb;

	nb = (long)n;
	i = 0;
	neg = 0;
	if (nb < 0)
	{
		neg++;
		i++;
		nb = -nb;
	}
	i += ft_itoalen(nb);
	str = ft_str(nb, i, neg);
	return (str);
}
