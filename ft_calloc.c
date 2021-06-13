/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:30:40 by eryoo             #+#    #+#             */
/*   Updated: 2021/06/13 11:24:00 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	memory;
	void	*dst;

	memory = size * count;
	dst = malloc(memory);
	if (!(dst))
		return (0);
	ft_memset(dst, 0, memory);
	return (dst);
}
