/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:08:48 by epinaud           #+#    #+#             */
/*   Updated: 2024/06/12 18:32:39 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cpdest;
	const char	*cpsrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	cpdest = dest;
	cpsrc = src;
	if (cpdest < cpsrc)
	{
		while (i < n)
		{
			cpdest[i] = cpsrc[i];
			i++;
		}
	}
	else
		while (n-- > 0)
			cpdest[n] = cpsrc[n];
	return (dest);
}
