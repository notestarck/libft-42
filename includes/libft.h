/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:44:26 by estarck           #+#    #+#             */
/*   Updated: 2022/10/06 09:33:27 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//Converts a string to a number.
int		ft_atoi(const char *str);

//Check if character is digit or alpha.
int		ft_isalnum(int c);

//Check if character is alpha.
int		ft_isalpha(int c);

//Check if character is ascii.
int		ft_isascii(int c);

//Check if character is digit.
int		ft_isdigit(int c);

//Check if character is printable.
int		ft_isprint(int c);

//Compares byte string s1 against byte string s2.
int		ft_memcmp(const void *s1, const void *s2, size_t n);

//Compares two strings
int		ft_strcmp(char *s1, char *s2);

//Compares string s1 against string s2.
int		ft_strncmp(const char *s1, const char *s2, size_t n);

//Converts a lower-case letter to the corresponding upper-case letter.
int		ft_tolower(int c);

//Converts a upper-case letter to the corresponding lower-case letter.
int		ft_toupper(int c);

//Writes n zeroed bytes to the string s.
void	ft_bzero(void *s, size_t n);

//Writes character c in file descriptor fd.
void	ft_putchar_fd(char c, int fd);

//Write s in file fd, and append a line end.
void	ft_putendl_fd(char *s, int fd);

//Write a number in file descriptor fd.
void	ft_putnbr_fd(int n, int fd);

//Write string s in file descriptor fd.
void	ft_putstr_fd(char *s, int fd);

//Applies function f to each characters in string s.
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

//Allocate memory of size count * size and set all values to NULL.
void	*ft_calloc(size_t count, size_t size);

//Locates the first occurrence of c in string s.
void	*ft_memchr(const void *s, int c, size_t n);

/*
Copies n bytes from memory area src to memory area dst. 
The two strings may not overlap. If they do use ft_memmove instead.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*
Copies len bytes from string src to string dst. The two strings may overlap; 
the copy is always done in a non-destructive manner.
*/
void	*ft_memmove(void *dst, const void *src, size_t len);

//Writes len bytes of value c.
void	*ft_memset(void *str, int c, size_t len);

//Converts an int to an string.
char	*ft_itoa(int n);

/*
Locates the first occurrence of c in the string pointed to by s.
The terminating null character taken into account.
*/
char	*ft_strchr(const char *s, int c);

//Duplicates the string s1 into a new char array
char	*ft_strdup(const char *s1);

//Concatenate s1 and s2
char	*ft_strjoin(char const *s1, char const *s2);

/*
Applies function f to each characters in string s, and returns
a new string of all the results of f.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
Locates the first occurrence of the null-terminated string needle in the 
string haystack, where not more than len characters are searched.
If to_find is an empty string, str is returned; if to_find occurs 
nowhere in str, NULL is returned; otherwise a pointer to the first
character of the first occurrence of to_find is returned.
*/
char	*ft_strnstr(const char *s, const char *tofind, size_t len);

/*
Locates the first occurrence of c in the string pointed to by s.
The terminating null character taken into account.
*/
char	*ft_strrchr(const char *s, int c);

//Creates a copy of s1 wihout the characters in set at end and start of string.
char	*ft_strtrim(char const *s1, char const *set);

//Returns a new string from s, starting at index start with size len.
char	*ft_substr(char const *s, unsigned int start, size_t len);

//Splits string s by separator c.
char	**ft_split(char const *s, char c);

/*
Appends string src to the end of dst.  
It will append at most dstsize - strlen(dst) - 1 characters. 
It will then NUL-terminate the new string
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*
Copies up to dstsize - 1 characters from the string src to dst, 
NUL-terminating the result if dstsize is not 0.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

//Returns the length of string s
size_t	ft_strlen(const char *str);

//Creates a new list element using content
t_list	*ft_lstnew(void *content);

//Adds new at the front of lst.
void	ft_lstadd_front(t_list **lst, t_list *new);

//Returns the size of lst.
int		ft_lstsize(t_list *lst);

//Returns the last element of lst.
t_list	*ft_lstlast(t_list *lst);

//Adds new at the end of lst.
void	ft_lstadd_back(t_list **lst, t_list *new);

//Deletes an element from lst, using del on it's content.
void	ft_lstdelone(t_list *lst, void (*del)(void*));

//Iterates through lst, deleting every element (see ft_lstdelone).
void	ft_lstclear(t_list **lst, void (*del)(void*));

//Iterates through lst, using f on each element's content.
void	ft_lstiter(t_list *lst, void (*f)(void *));

/*
Iterates through "lst", applies "f" on every
element's content, puts results in a new list and returns it.
"del" is used if anything goes wrong.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif