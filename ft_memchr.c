/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:28:17 by epinaud           #+#    #+#             */
/*   Updated: 2024/05/27 16:08:33 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*sptr;

	i = 0;
	sptr = (unsigned char *)s;
	while (i < n)
	{
		if (sptr[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
