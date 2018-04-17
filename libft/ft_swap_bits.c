/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 10:59:59 by passef            #+#    #+#             */
/*   Updated: 2018/02/09 19:44:50 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void		ft_swap(char *a, char *b)
{
	*b = (long long)(*a) ^ (long long)(*b);
	*a = (long long)(*a) | (long long)(*b);
	*b = (long long)(*a) ^ (long long)(*b);
}
*/

void		ft_swap(char **a, char **b)
{
	b = (long long)a ^ (long long)b;
	a = (long long)a | (long long)b;
	b = (long long)a ^ (long long)b;
}
