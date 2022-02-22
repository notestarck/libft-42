/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 08:37:47 by estarck           #+#    #+#             */
/*   Updated: 2022/02/22 14:45:03 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>


size_t ft_strlen(char *str);
void	*ft_memset(void *str, char c, int bytes);
void	ft_bzero(void *s, size_t n);

int main(void)
{
	/*
	char	*str = "Vive le vent !";
	printf("%lu\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
	return (0);
	*/

	/*	
	char str1[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str1);
    memset(str1 + 13, '.', 8*sizeof(char));
    printf("After memset(string):  %s\n", str1);
	printf("%p\n", memset(str1 + 13, '.', 8*sizeof(char)));

	char str2[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str2);
    ft_memset(str2 + 13, '.', 8*sizeof(char));
    printf("After memset(manu):  %s\n", str2);
	printf("%p\n", ft_memset(str1 + 13, '.', 8*sizeof(char)));
	printf("%p\n", memset(str1 + 13, '.', 8*sizeof(char)));
	*/

 
	char str1[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore bzero(): %s\n", str1);
    bzero(str1 + 13, 2);
    printf("After bzero(string):  %s\n", str1);

	char str2[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore bzero(): %s\n", str2);
    ft_bzero(str2 + 13, 2*sizeof(char));
    printf("After bzero(manu):  %s\n", str2);
}