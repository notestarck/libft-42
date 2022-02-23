/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:20:30 by estarck           #+#    #+#             */
/*   Updated: 2022/02/23 21:24:09 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*src1;
	char	*src2;

	src1 = (char *)s1;
	src2 = (char *)s2;
	while (n)
	{
		if (*src1 == *src2)
		{
			src1++;
			src2++;
			n--;
		}
		else
			return (*src1 - *src2);
	}
	return (0);
}
