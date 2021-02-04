/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:55:42 by mcrisari          #+#    #+#             */
/*   Updated: 2021/01/28 10:55:44 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	s_count(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

char			**ft_split(char const *s, char c)
{
	char		**matrix;
	char		*start;
	size_t		i;
	size_t		len;

	if (!s || !(matrix = ft_calloc(s_count(s, c) + 1, sizeof(*matrix))))
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			len = s - start + 1;
			if (!(matrix[i] = ft_calloc(len, sizeof(**matrix))))
				return (0);
			ft_strlcpy(matrix[i++], start, len);
		}
		else
			s++;
	}
	return (matrix);
}
