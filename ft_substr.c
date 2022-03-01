/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:59:50 by estarck           #+#    #+#             */
/*   Updated: 2022/03/01 17:53:23 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;

	r = (char *)malloc(sizeof(char) * (len + 1));
	if (r == 0x0)
		return (0x0);
	if (ft_strlen((char *)s) <= start)
	{
		r[0] = '\0';
		return (r);
	}
	ft_strlcpy(r, s + start, len + 1);
	return (r);
}
