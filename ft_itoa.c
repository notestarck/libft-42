/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:05:31 by estarck           #+#    #+#             */
/*   Updated: 2022/02/24 14:01:31 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	l;

	l = 0;
	if (n < 0)
		n = -n;
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

	i = ft_len(n);
	if (n < 0)
		i = i + 1;
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (dest == 0x0)
		return (0x0);
	dest[i--] = '\0';
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		dest[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (dest);
}
