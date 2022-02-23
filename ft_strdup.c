/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:29:44 by estarck           #+#    #+#             */
/*   Updated: 2022/02/23 17:49:09 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	if (dst == 0x0)
		return (0x0);
	ft_strlcpy(dst, s1, sizeof(char) * (ft_strlen((char *)s1) + 1));
	return (dst);
}
