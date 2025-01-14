/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:08:48 by epinaud           #+#    #+#             */
/*   Updated: 2024/06/12 18:30:25 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cpdest;
	const char	*cpsrc;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	cpdest = dest;
	cpsrc = src;
	while (i < n)
	{
		cpdest[i] = cpsrc[i];
		i++;
	}
	return (dest);
}
