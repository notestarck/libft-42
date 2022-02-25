/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:05:31 by estarck           #+#    #+#             */
/*   Updated: 2022/02/24 16:55:54 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	l;

	l = 0;
	if (n < 0)
	{
		n = -n;
		l++;
	}
	while (n > 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	long	nb;

	nb = n;
	i = ft_len(nb);
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (dest == 0x0)
		return (0x0);
	dest[i--] = '\0';
	if (nb == 0)
		dest[0] = '0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		dest[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	return (dest);
}
