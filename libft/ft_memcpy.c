/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:13:19 by mcrisari          #+#    #+#             */
/*   Updated: 2021/01/19 11:13:24 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_byte			*strd;
	const t_byte	*strs;

	strd = dst;
	strs = src;
	if (!dst && !src)
		return (dst);
	while (n)
	{
		*strd = *strs;
		strd++;
		strs++;
		n--;
	}
	return (dst);
}
