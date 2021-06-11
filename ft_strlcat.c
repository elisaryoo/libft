/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:34:26 by eryoo             #+#    #+#             */
/*   Updated: 2021/06/11 13:57:15 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	x;
	size_t	y;

	if (n <= ft_strlen(dst))
		return (n + ft_strlen(src));
	x = ft_strlen(dst);
	y = 0;
	while ((src[y] != '\0') && (x + 1 < n))
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[y]));
}