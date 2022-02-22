/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:06:18 by estarck           #+#    #+#             */
/*   Updated: 2022/02/22 12:20:07 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	if (n <= 0)
		return ;
	while (i < n)
		d[i++] = 0;
}
