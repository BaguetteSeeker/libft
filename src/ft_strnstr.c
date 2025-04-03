/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:28:47 by epinaud           #+#    #+#             */
/*   Updated: 2025/04/03 00:47:43 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)(haystack));
	i = 0;
	while (i < n && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < n && needle[j] == haystack[i + j] && needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(&haystack[i]));
		i++;
	}
	return (0);
}

char	*ft_strrnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	hlen;
	size_t	nlen;

	if (!needle || *needle == '\0')
		return ((char *)(haystack));
	hlen = ft_strlen(haystack);
	nlen = ft_strlen(needle);
	if (hlen < nlen || n < nlen)
        return (NULL);
	i = ft_minint(hlen, n);
	while (i > 0)
	{
        j = 0;
        while (j < n && haystack[hlen - i + j] == needle[j])
            j++;
        if (j == nlen)
            return ((char *)&haystack[hlen - i]);
        i--;
    }
	return (NULL);
}
