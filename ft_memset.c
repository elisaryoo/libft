/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:57:15 by eryoo             #+#    #+#             */
/*   Updated: 2021/06/13 11:09:08 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*memory;
	unsigned char	value;

	memory = s;
	value = c;
	i = 0;
	while (i < n)
	{
		memory[i] = value;
		i++;
	}
	s = memory;
	return (s);
}
