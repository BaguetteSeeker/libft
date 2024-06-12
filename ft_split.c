/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:43:19 by epinaud           #+#    #+#             */
/*   Updated: 2024/06/01 21:31:53 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wcount(const char *s, char c)
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
	size_t	wlen;
	int		i;
	char	**slist;

	slist = malloc(sizeof(char *) * (wcount(s, c) + 1));
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
			wlen = ft_strlen(s);
		else
			wlen = ft_strchr(s, c) - s;
		slist[i] = ft_substr(s, 0, wlen);
		i++;
		s += wlen;
	}
	slist[i] = NULL;
	return (slist);
}
