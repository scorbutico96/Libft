/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 10:36:29 by mcrisari          #+#    #+#             */
/*   Updated: 2021/01/20 10:36:34 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (!src || !dst)
		return (0);
	if ((ft_strlen(src) + 1) <= dstsize)
		ft_memcpy(dst, src, (ft_strlen(src) + 1));
	else if (dstsize)
	{
		ft_memcpy(dst, src, (dstsize - 1));
		dst[dstsize - 1] = '\0';
	}
	return (ft_strlen(src));
}
