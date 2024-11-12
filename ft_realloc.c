/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:17:35 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/12 05:48:47 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	put_addrlst(char **ptr)
{
	int	i;

	ft_printf("Main ptr addr is %p —\n", ptr);
	i = 0;
	while (ptr[i])
	{
		ft_printf("Row %d addr is %p\n", i, ptr[i]);
		i++;
	}
}

void	*ft_realloc(void *ptr, size_t newsize)
{
	void	*newptr;
	size_t	cursize;

	if (!newsize && ptr)
		return (free(ptr), NULL);
	else if (!ptr)
		return (malloc(newsize));
	cursize = (ft_ptrlen(ptr) + 1) * 8;
	if (newsize <= cursize)
		return (ptr);
	newptr = malloc(newsize);
	ft_memcpy(newptr, ptr, cursize);
	free(ptr);
	return (newptr);
}
