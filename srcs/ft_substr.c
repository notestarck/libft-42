/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:59:50 by estarck           #+#    #+#             */
/*   Updated: 2022/02/23 21:24:09 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;

	r = malloc(sizeof(char) * (len + 1));
	if (r == 0x0)
		return (0x0);
	ft_strlcpy(r, s + start, len + 1);
	return (r);
}
