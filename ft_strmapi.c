/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:12:24 by eryoo             #+#    #+#             */
/*   Updated: 2021/06/13 00:43:36 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	size;
	size_t	x;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	res = malloc(size + 1);
	if (res == NULL)
		return (NULL);
	x = 0;
	while (x < size)
	{
		res[x] = f(x, s[x]);
		x++;
	}
	res[x] = '\0';
	return (res);
}