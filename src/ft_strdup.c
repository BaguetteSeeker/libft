/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:45:52 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/02 15:32:42 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*sptr;
	int		len;

	len = ft_strlen(s);
	sptr = malloc(sizeof(char) * (len + 1));
	if (sptr == NULL)
		return (0);
	while (*s)
		*sptr++ = *s++;
	*sptr = '\0';
	return (sptr - len);
}
