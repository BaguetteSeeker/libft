/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:45:54 by epinaud           #+#    #+#             */
/*   Updated: 2024/05/27 12:28:34 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	slen;
	size_t	dlen;
	size_t	j;

	j = 0;
	dlen = 0;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	while (dst[dlen] != '\0')
		dlen++;
	if (siz <= dlen)
		return (slen + siz);
	while (dlen + j < siz - 1 && src[j] != '\0')
	{
		dst[j + dlen] = src[j];
		j++;
	}
	dst[j + dlen] = '\0';
	return (slen + dlen);
}
