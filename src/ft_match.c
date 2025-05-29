/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:36:21 by epinaud           #+#    #+#             */
/*   Updated: 2025/05/29 20:09:08 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define NO_MATCH 0
#define MATCH 1

//Returns whether or not str matches patern (supports wildcards)
int	match_pattern(const char *pattern, const char *str)
{
	while (*pattern && *str)
	{
		if (*pattern == '*')
		{
			while (*pattern == '*')
				pattern++;
			if (!*pattern)
				return (MATCH);
			while (*str)
				if (match_pattern(pattern, str++))
					return (MATCH);
			return (NO_MATCH);
		}
		else if (*pattern == *str)
		{
			pattern++;
			str++;
		}
		else
			return (NO_MATCH);
	}
	while (*pattern == '*')
		pattern++;
	return (!*pattern && !*str);
}
