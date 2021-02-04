/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:49:39 by mcrisari          #+#    #+#             */
/*   Updated: 2021/01/27 11:49:41 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	if (!count || !size)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if (!(ptr = malloc(count * size)))
		return (0);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
