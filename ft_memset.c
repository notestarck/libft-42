/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 08:51:01 by estarck           #+#    #+#             */
/*   Updated: 2022/02/22 12:03:06 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t len)
{
	int				i;
	unsigned char	*d;

	d = (unsigned char *)str;
	i = 0;
	while (i < len)
		d[i++] = (unsigned char)c;
	return ((void *)d);
}
