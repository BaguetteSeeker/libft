/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:17:35 by epinaud           #+#    #+#             */
/*   Updated: 2025/05/07 12:11:33 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	cursize;
// cursize = (ft_ptrlen(ptr) + 1) * sizeof(*ptr);
// if (newsize <= cursize)
// 	return (ptr);
void	*ft_realloc(void *ptr, size_t newsize)
{
	void	*newptr;

	if (!newsize && ptr)
		return (free(ptr), NULL);
	else if (!ptr)
		return (malloc(newsize));
	newptr = malloc(newsize);
	ft_memcpy(newptr, ptr, ft_strlen(ptr) + 1);
	free(ptr);
	return (newptr);
}
