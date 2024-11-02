/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:17:35 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/02 15:32:33 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	put_addrlst(char **ptr)
{
	int	i;

	printf("Main ptr addr is %p —\n", ptr);
	i = 0;
	while (ptr[i])
	{
		printf("Row %d addr is %p\n", i, ptr[i]);
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
	printf("Currsiz : sizof oldptr[0] is %ld\n Bytes in old ptr : %ld\n", sizeof(ptr[0]), ft_ptrlen(ptr));
	printf("Old double ptr has %ld subptrs\n", cursize - 1);
	if (newsize <= cursize)
		return (ptr);
	newptr = malloc(newsize);
	printf("Just realloced a new ptr %p of siz %ld\n", newptr, newsize);
	ft_memcpy(newptr, ptr, cursize);
	free(ptr);
	return (newptr);
}
