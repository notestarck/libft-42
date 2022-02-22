/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 08:37:47 by estarck           #+#    #+#             */
/*   Updated: 2022/02/22 08:47:39 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


int ft_strlen(char *str);

int main(void)
{
	char	*str = "Vive le vent !";
	printf("%d\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
	return (0);
}