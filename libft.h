/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:06:08 by epinaud           #+#    #+#             */
/*   Updated: 2024/05/25 21:16:12 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define	LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(char c);
int	ft_isalpha(char c);
int	ft_isalnum(char c);
int	ft_isascii(char c);
int	ft_isprint(char c);
int	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero (void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
unsigned int	ft_strlcat(char *dest, const char *src, size_t siz);

#endif
