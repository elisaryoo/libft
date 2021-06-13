/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 00:40:25 by eryoo             #+#    #+#             */
/*   Updated: 2021/06/13 17:04:22 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_count(const char *s, char c)
{
	int		flag;
	size_t	count;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (!flag && *s != c)
		{
			flag = 1;
			count++;
		}
		else if (flag && *s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static size_t	get_wordlen(const char *s, char c)
{
	size_t	l;

	l = 0;
	while (s[l] && s[l] != c)
		l++;
	return (l);
}

static char	*copy(const char *s, size_t len)
{
	char	*str;
	size_t	x;

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	x = 0;
	while (x < len)
	{
		str[x] = s[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}

static void	*kill(char **str, size_t stop)
{
	size_t	i;

	i = 0;
	while (i < stop)
		free(str[i]);
	free(str);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	len;
	size_t	words;
	size_t	i;

	if (s == NULL)
		return (NULL);
	words = get_count(s, c);
	str = malloc((words + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		len = get_wordlen(s, c);
		if (len)
		{
			str[i] = copy(s, len);
			if (str[i++] == NULL)
				return (kill(str, i - 1));
		}
		s += len + 1;
	}
	str[i] = '\0';
	return (str);
}
