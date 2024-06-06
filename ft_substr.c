/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:58:28 by epinaud           #+#    #+#             */
/*   Updated: 2024/06/06 21:43:44 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substrlen;
	size_t	slen;
	size_t	i;
	char	*scpy;

	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	substrlen = slen - start;
	if (substrlen > len)
		substrlen = len;
	scpy = malloc((substrlen + 1) * sizeof(char));
	if (scpy == NULL)
		return (NULL);
	i = 0;
	while (i < substrlen)
	{
		scpy[i] = s[i + start];
		i++;
	}
	scpy[i] = '\0';
	return (scpy);
}
