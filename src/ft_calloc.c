/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:02:01 by epinaud           #+#    #+#             */
/*   Updated: 2024/09/25 17:51:35 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*newmem;
	char	*cnewmem;
	size_t	bytes;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	bytes = nmemb * size;
	if (bytes / nmemb != size)
		return (NULL);
	newmem = malloc(nmemb * size);
	if (newmem == NULL)
		return (NULL);
	cnewmem = newmem;
	i = 0;
	while (i < bytes)
		cnewmem[i++] = '\0';
	return (newmem);
}
