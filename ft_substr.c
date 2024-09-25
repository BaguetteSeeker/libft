/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:58:28 by epinaud           #+#    #+#             */
/*   Updated: 2024/09/25 18:14:44 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substrlen;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	substrlen = slen - start;
	if (substrlen > len)
		substrlen = len;
	substr = malloc(sizeof(char) * (substrlen + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < substrlen && s[i + start])
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
