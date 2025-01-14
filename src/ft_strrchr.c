/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:50:54 by epinaud           #+#    #+#             */
/*   Updated: 2024/10/15 08:32:20 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptrcpy;

	ptrcpy = s;
	while (*s)
		s++;
	if (c == '\0')
		return ((char *)s);
	while (s != ptrcpy - 1)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (0);
}
