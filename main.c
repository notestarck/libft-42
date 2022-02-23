/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 08:37:47 by estarck           #+#    #+#             */
/*   Updated: 2022/02/23 17:49:03 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>
#include <assert.h>
#include <stdlib.h>

#define INT_NUMBER 10

size_t ft_strlen(char *str);
void	*ft_memset(void *str, char c, int bytes);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_toupper(int c);
int		ft_tolower(int c);
char 	*ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

int main(int argc, char **argv)
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

 
 	/*
	char str1[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore bzero(): %s\n", str1);
    bzero(str1 + 13, 2);
    printf("After bzero(string):  %s\n", str1);

	char str2[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore bzero(): %s\n", str2);
    ft_bzero(str2 + 13, 2*sizeof(char));
    printf("After bzero(manu):  %s\n", str2);
	*/

	/*
	char str1[50] = "GeeksForGeeks is for programming geeks.";
	char str2[50] = "";
    printf("\nBefore bzero(): %s\n", str2);
    memcpy(str1, str2, 6);
    printf("After bzero(string):  %s\n", str2);

	char str3[50] = "GeeksForGeeks is for programming geeks.";
	char str4[50] = "";
    printf("\nBefore bzero(): %s\n", str4);
    ft_memcpy(str3, str4, 6);
    printf("After bzero(manu):  %s\n", str4);	
	*/

	/*
	char str1[] = "Geeks";  
	char str2[] = "Quiz";  
  
	puts("str1 before memcpy ");
	puts(str1);
  
	ft_memcpy (str1, str2, 2);
  
	puts("\nstr1 after memcpy ");
	puts(str1);
	printf("%p", memcpy (str1, str2, 2));
	*/
	 
	/*
	char str1[] = "salut tout le monde";  
	char str2[] = "Quiz";  
  
	puts("str1 before memmove ");
	puts(str1);
  
	ft_memmove (str1+6, str1, 2);
  
	puts("\nstr1 after memmove ");
	puts(str1);
	return (0);
	*/

	 /*
	char c = '2';
	printf("%d", ft_toupper(c));

	return 0;
	*/

	/*
	char c = 'E';
	printf("%d", ft_tolower(c));

	return 0;
	*/

	/*
	char str[] = "Bonjour !";
	char c = '!';
	printf("%s", ft_strrchr(str, c));

	return (0);
	*/

	/*
	char str[] = "Geek's Power !";
	char c = 's';
	printf("%p\n", ft_memchr(str, c, 8));
	printf("%p", memchr(str, c, 8));
	return (0);
	*/

	/*
	int array1 [] = { 54, 85, 22, 63, 21 };
    int array2 [] = { 54, 85, 19, 63, 21 };
	//char array1[] = "abrdez";
	//char array2[] = "abcdee";

	printf("%d\n", ft_memcmp(array1, array2, 12));
	printf("%d\n", memcmp(array1, array2, 12));
	*/

/*
		printf("%d\n", ft_atoi(argv[1]));
		printf("%d\n", atoi(argv[1]));
	
    
    return 0;
	*/

    const char * original = "The original string.";

    // On duplique la chaîne de caractères initiale.
    char * copy = ft_strdup( original );
    
    // On passe chaque lettre en majuscule.
    char * ptr = copy;
    while( *ptr != '\0' ) {
        *ptr = toupper( *ptr );
        ptr++;
    }

    // On affiche la chaîne finale
    printf( "%s\n", copy );

    // Sans oublier de libérer l'espace mémoire au final.
    free( copy );

    return EXIT_SUCCESS;
}
