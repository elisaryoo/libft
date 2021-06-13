/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 00:40:25 by eryoo             #+#    #+#             */
/*   Updated: 2021/06/13 11:30:03 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_count(const char *s, char c)
{
	size_t	count;
	size_t	i;
	int		flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] == c && s[i])
			flag = 0;
		else if (!flag && s[i] != c && s[i])
		{
			count++;
			flag = 1;
		}
		i++;
	}
	return (count);
}

void	copy(char *dst, char const *src, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start < end)
		dst[i++] = src[start++];
	dst[i] = 0;
}

void	split(char const *s, char c, char **str)
{
	size_t	start;
	size_t	i;
	size_t	j;

	start = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			if (!(str[j] = (char *)malloc(sizeof(char) * (i - start + 1))))
				return ;
			copy(str[j], s, start, i);
			j++;
		}
		else if (s[i])
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	n;

	if (s == 0)
		return (NULL);
	n = get_count(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	str[n] = 0;
	if (n == 0)
		return (str);
	split(s, c, str);
	return (str);
}
