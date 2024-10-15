/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:45:52 by epinaud           #+#    #+#             */
/*   Updated: 2024/10/15 08:34:46 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*sptr;
	int		len;
	int		i;

	len = ft_strlen(s) + 1;
	sptr = malloc(sizeof(char) * len);
	if (sptr == NULL)
		return (0);
	i = 0;
	while (i < (len))
	{
		sptr[i] = s[i];
		i++;
	}
	return (sptr);
}
