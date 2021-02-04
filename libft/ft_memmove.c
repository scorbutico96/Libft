/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:31:10 by mcrisari          #+#    #+#             */
/*   Updated: 2021/01/19 12:31:21 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_byte			*d;
	const t_byte	*s;

	d = dst;
	s = src;
	if (s < d)
	{
		while (len > 0)
		{
			*(d + len - 1) = *(s + len - 1);
			len--;
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
