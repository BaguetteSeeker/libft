/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:45:54 by epinaud           #+#    #+#             */
/*   Updated: 2024/05/25 14:37:07 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, const char *src, size_t siz)
{
	size_t	dlen;
	size_t	j;
	size_t	srclen;

	dlen = 0;
	j = 0;
	srclen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (siz < dlen)
		return (srclen + siz);
	while (j < siz - dlen - 1)
	{
		dest[j + dlen] = src[j];
		j++;
	}
	dest[j + dlen] = '\0';
	return (srclen + dlen);
}
