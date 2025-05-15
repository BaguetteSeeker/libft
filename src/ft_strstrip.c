/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:45:49 by epinaud           #+#    #+#             */
/*   Updated: 2025/05/16 13:38:20 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Performs primary lvl SQUODE and DQUOTE removal
//Returns the original ptr, no malloc performed
char	*strip_outquotes(char *str)
{
	char	quote;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_strchr("\"\'", str[i]))
		{
			quote = str[i++];
			while (str[i] && str[i] != quote)
				str[j++] = str[i++];
			if (str[i] == quote)
				i++;
		}
		else
			str[j++] = str[i++];
	}
	str[j] = '\0';
	return (str);
}

char	*strstripchr(char *str, char *chrs, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!ft_strchr(chrs, str[i]) || i >= (int)n)
			str[j++] = str[i++];
		else
			i++;
	}
	str[j] = '\0';
	return (str);
}
