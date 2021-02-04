/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:47:39 by mcrisari          #+#    #+#             */
/*   Updated: 2021/01/19 16:47:45 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const t_byte	*str;

	str = s;
	while (n)
	{
		if (*str == (t_byte)c)
			return ((t_byte *)str);
		str++;
		n--;
	}
	return (0);
}
