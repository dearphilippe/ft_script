/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 10:59:59 by passef            #+#    #+#             */
/*   Updated: 2018/02/12 08:11:44 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_swap(char *str1, char *str2)
{
	char *tmp = (char *)malloc((ft_strlen(str1) + 1) * sizeof(char));
	ft_strcpy(tmp, str1);
	ft_strcpy(str1, str2);
	ft_strcpy(str2, tmp);
	free(tmp);
}
