/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:45:49 by epinaud           #+#    #+#             */
/*   Updated: 2025/05/04 10:47:57 by epinaud          ###   ########.fr       */
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
