/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:17:35 by epinaud           #+#    #+#             */
/*   Updated: 2025/05/14 19:26:49 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	cursize;
// cursize = (ft_ptrlen(ptr) + 1) * sizeof(*ptr);
// if (newsize <= cursize)
// 	return (ptr);
void	*ft_realloc(void *ptr, size_t newsize, size_t oldsiz)
{
	void	*newptr;

	if (!newsize && ptr)
		return (free(ptr), NULL);
	else if (!ptr)
		return (malloc(newsize));
	newptr = malloc(newsize);
	if (!newptr)
		return (NULL);
	ft_memcpy(newptr, ptr, oldsiz);
	free(ptr);
	return (newptr);
}
