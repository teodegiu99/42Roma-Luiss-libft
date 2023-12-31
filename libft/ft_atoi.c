/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:57:33 by mde-gius          #+#    #+#             */
/*   Updated: 2021/04/18 18:57:36 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	long int	total;
	long int	multiplier;

	total = 0;
	multiplier = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || \
		 *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		multiplier = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		total *= 10;
		total += *str - '0';
		if ((total * multiplier < INT_MIN) || (total * multiplier > INT_MAX))
			return ((total * multiplier < INT_MIN) - 1);
		str++;
	}
	return (total * multiplier);
}
