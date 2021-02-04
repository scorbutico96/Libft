/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:39:04 by mcrisari          #+#    #+#             */
/*   Updated: 2021/01/19 11:39:08 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_byte			*strd;
	const t_byte	*strs;
	t_byte			to_find;

	strd = dst;
	strs = src;
	to_find = c;
	while (n)
	{
		if (*strs == to_find)
		{
			*strd++ = *strs++;
			return (strd);
		}
		*strd = *strs;
		strs++;
		strd++;
		n--;
	}
	return (0);
}
