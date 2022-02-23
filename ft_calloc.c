/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:44:09 by estarck           #+#    #+#             */
/*   Updated: 2022/02/23 17:22:11 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*calloc(size_t count, size_t size)
{
	void	*s;

	s = malloc(count * size);
	if (s == 0x0)
		return (0x0);
	ft_bzero(s, count * size);
	return (s);
}
