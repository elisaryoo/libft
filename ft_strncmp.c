/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:36:43 by eryoo             #+#    #+#             */
/*   Updated: 2021/06/11 00:47:33 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i])
    {
        i++;
    }
    if (i == n)
        return (0);
    else if (s1 < s2)
        return (-1);
    else 
        return (1);
}