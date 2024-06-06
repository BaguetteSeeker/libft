/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:28:47 by epinaud           #+#    #+#             */
/*   Updated: 2024/06/06 23:19:44 by epinaud          ###   ########.fr       */
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
		while (i + j < n && needle[j] == haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(&haystack[i]));
		i++;
	}
	return (0);
}
