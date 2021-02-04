/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:01:17 by mcrisari          #+#    #+#             */
/*   Updated: 2021/01/21 11:01:23 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize > dstlen + 1)
	{
		ft_strlcpy(&dst[dstlen], src, (dstsize - dstlen));
		dst[dstsize - 1] = '\0';
	}
	if (dstsize < dstlen)
		return (dstsize + srclen);
	else
		return (dstlen + srclen);
}
