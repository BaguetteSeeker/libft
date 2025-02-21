/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:50:54 by epinaud           #+#    #+#             */
/*   Updated: 2025/02/21 18:21:23 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

//Returns the address of the first occurence in <s> of one of the chars specified within <occ>
char	*ft_strocc(const char *s, const char *occ)
{
	while (*s)
	{
		if (ft_strchr(occ, *s))
			return ((char *)s);
		s++;
	}
	if (ft_strchr(occ, '\0'))
		return ((char *)s);
	return (NULL);
}
