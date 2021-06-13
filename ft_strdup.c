/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 19:54:40 by eryoo             #+#    #+#             */
/*   Updated: 2021/06/13 11:15:08 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = (void *)malloc(ft_strlen(s1) + 1);
	if (!dst)
		return (0);
	ft_memcpy(dst, s1, ft_strlen(s1) + 1);
	return (dst);
}
