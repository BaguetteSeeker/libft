/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:52:05 by epinaud           #+#    #+#             */
/*   Updated: 2025/05/15 08:06:10 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	startpos;
	size_t	endpos;
	size_t	s2len;
	size_t	i;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	startpos = 0;
	while (ft_strchr(set, s1[startpos]) && s1[startpos] != '\0')
		startpos++;
	endpos = ft_strlen(s1);
	while (ft_strchr(set, s1[endpos - 1]) && s1[endpos - 1] != '\0')
		endpos--;
	if (endpos < startpos)
		return (ft_strdup(""));
	s2len = (endpos - startpos);
	s2 = malloc(sizeof(char) * (s2len + 1));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (i < s2len)
		s2[i++] = s1[startpos++];
	s2[i] = '\0';
	return (s2);
}
