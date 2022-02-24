/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:22:51 by estarck           #+#    #+#             */
/*   Updated: 2022/02/24 15:34:45 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	dest = ft_strdup(s);
	i = 0;
	while (dest[i])
	{
		dest [i] = f(i, s[i]);
		i++;
	}
	return (dest);
}

char	ft_upchar(unsigned int i, char c)
{
	c -= 32;
	return (c);
}

#include <stdio.h>

int main(void)
{
	char const *str = "bonjour@les@enfants";
	printf("%s", ft_strmapi(str, ft_upchar));
	return (0);
}