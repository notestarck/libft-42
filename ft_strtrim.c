/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:12:13 by estarck           #+#    #+#             */
/*   Updated: 2022/02/24 10:46:50 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_issep(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (*s1 == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen((char *)s1);
	while (ft_issep(&s1[start], set))
		start++;
	while (ft_issep(&s1[end], set))
		end--;
	dst = malloc(sizeof(char) * (end - start + 1));
	if (dst == 0x0)
		return (0x0);
	ft_strlcpy(dst, s1 + start + 1, end - start);
	return (dst);
}
