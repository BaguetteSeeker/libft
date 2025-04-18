/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:41:48 by epinaud           #+#    #+#             */
/*   Updated: 2025/04/05 21:02:42 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinedstr;
	size_t	totallen;

	if (!s1 || !s2)
		return (NULL);
	totallen = ft_strlen(s1) + ft_strlen(s2);
	joinedstr = malloc(sizeof(char) * (totallen + 1));
	if (!joinedstr)
		return (NULL);
	while (*s1)
		*joinedstr++ = *s1++;
	while (*s2)
		*joinedstr++ = *s2++;
	*joinedstr = '\0';
	return (joinedstr - totallen);
}

char	*ft_strjoin2(char const *s1, char const *s2, char const *s3)
{
	char	*joinedstr;
	size_t	totallen;

	if (!s1 || !s2 || !s3)
		return (NULL);
	totallen = ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3);
	joinedstr = malloc(sizeof(char) * (totallen + 1));
	if (!joinedstr)
		return (NULL);
	while (*s1)
		*joinedstr++ = *s1++;
	while (*s2)
		*joinedstr++ = *s2++;
	while (*s3)
		*joinedstr++ = *s3++;
	*joinedstr = '\0';
	return (joinedstr - totallen);
}
