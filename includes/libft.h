/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:06:08 by epinaud           #+#    #+#             */
/*   Updated: 2025/05/27 15:41:43 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>
# include <limits.h>
# include <stdarg.h>
# include <errno.h>
# include <fcntl.h>
# include "printf.h"
# include "linked_lists.h"

# ifndef GNL_BUFFSIZ
#  define GNL_BUFFSIZ 100
# endif

//Part 1
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t siz);
size_t	ft_strlcat(char *dst, const char *src, size_t siz);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int		ft_atoi(const char *nptr);
char	*ft_strdup(char *s);
void	*ft_calloc(size_t nmemb, size_t size);

//Part 2
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(long int n, int fd, ...);

//Personnal add-ons
void	ft_swap(long *val1, long *val2);
int		ft_minint(int a, int b);
int		ft_maxint(int a, int b);
size_t	ft_count_digits(char *str);
size_t	ft_nbrlen(long int nbr);
size_t	ft_nbrblen(unsigned long nbr, size_t baselen);
size_t	ft_nbrdig(long int nbr);
size_t	ft_putnbr_base_fd(unsigned long n, char *base, int fd);
int		ft_check_dup(char *str);
int		ft_base_integrity(char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(long int n, char *base, ...);
void	ft_putstrcap_fd(char *s, size_t cap, int fd);
char	*ft_strocc(const char *s, const char *occ);
char	*ft_strrnstr(const char *haystack, const char *needle, size_t n);

//Arrays
int		in_array(int val, int tab[], size_t siz);
int		find_pos(int val, int tab[], size_t siz);
int		array_min(int arr[], size_t siz);
int		array_max(int arr[], size_t siz);
size_t	nb_elems(int arr[], size_t arr_bytnbr);

//Dynamic Arrays
size_t	ft_ptrlen(const void **ptr);
char	**ft_free_dynarr(char **ptr);
void	put_dynarr_addr(char **ptr);
void	put_recurse_dynarr(char **ptr);
char	*ft_lststr(char **lst, char *str);

//Memory
void	*ft_realloc(void *ptr, size_t newsize, size_t oldsiz);

//Strings
char	*strip_outquotes(char *str);
char	*strstripchr(char *str, char *chrs, size_t n);
char	*ft_strjoin2(char const *s1, char const *s2, char const *s3);

//Read
char	*get_next_line(int fd);
#endif
