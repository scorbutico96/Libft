/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:33:31 by mcrisari          #+#    #+#             */
/*   Updated: 2021/01/28 14:33:35 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_digit_count(long int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	n2;

	n2 = n;
	len = ft_digit_count(n2);
	if (!(str = ft_calloc(len + 1, sizeof(char))))
		return (0);
	if (n2 == 0)
		str[0] = '0';
	if (n2 < 0)
	{
		str[0] = '-';
		n2 = n2 * -1;
	}
	while (n2 > 0)
	{
		str[len - 1] = (n2 % 10) + '0';
		n2 = n2 / 10;
		len--;
	}
	return (str);
}
