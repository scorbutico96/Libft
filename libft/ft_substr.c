/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:42:13 by mcrisari          #+#    #+#             */
/*   Updated: 2021/01/27 12:42:52 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	x;
	char	*str;

	if (!s)
		return (0);
	if (ft_strlen(s) - start > len)
		x = len;
	else
		x = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		if (!(str = ft_calloc(1, sizeof(char))))
			return (0);
		return (str);
	}
	i = 0;
	if (!(str = malloc(sizeof(char) * (x + 1))))
		return (0);
	while (i < x)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
