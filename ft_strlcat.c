/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:00:39 by estarck           #+#    #+#             */
/*   Updated: 2022/02/22 19:03:08 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lsrc;

	i = 0;
	j = 0;
	lsrc = 0;
	while (src[lsrc] != '\0')
		lsrc++;
	while (dst[i] && i < dstsize)
		i++;
	if (!dstsize)
		return (dstsize + lsrc);
	while (src[j] && (i + j < dstsize - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + lsrc);
}