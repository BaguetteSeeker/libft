/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:43:19 by epinaud           #+#    #+#             */
/*   Updated: 2024/12/11 21:52:22 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wrd_count(const char *s, char c)
{
	int	occ;

	occ = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			occ++;
		while (*s != c && *s)
			s++;
	}
	return (occ);
}

char	**ft_split(const char *s, char c)
{
	size_t	wrdlen;
	int		i;
	char	**slist;

	slist = malloc(sizeof(char *) * (wrd_count(s, c) + 1));
	if (!s || !slist)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		if (!ft_strchr(s, c))
			wrdlen = ft_strlen(s);
		else
			wrdlen = ft_strchr(s, c) - s;
		slist[i] = ft_substr(s, 0, wrdlen);
		if (!slist[i++])
			return (ft_clean_memtree(slist));
		s += wrdlen;
	}
	slist[i] = NULL;
	return (slist);
}
