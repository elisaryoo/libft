/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:04:54 by eryoo             #+#    #+#             */
/*   Updated: 2021/09/08 07:20:22 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_escape(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r'
		|| c == '\f' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;

	while ((ft_escape(*str)))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nbr = 0;
	while ((ft_isdigit(*str)))
	{
		nbr *= 10;
		nbr += sign * (*str - '0');
		str++;
	}
	return (nbr);
}
