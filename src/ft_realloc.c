/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:17:35 by epinaud           #+#    #+#             */
/*   Updated: 2025/03/31 21:47:27 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t newsize)
{
	void	*newptr;
	size_t	cursize;

	if (!newsize && ptr)
		return (free(ptr), NULL);
	else if (!ptr)
		return (malloc(newsize));
	cursize = (ft_ptrlen(ptr) + 1) * sizeof(*ptr);
	if (newsize <= cursize)
		return (ptr);
	newptr = malloc(newsize);
	ft_memcpy(newptr, ptr, cursize);
	free(ptr);
	return (newptr);
}
