/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:02:01 by epinaud           #+#    #+#             */
/*   Updated: 2024/06/06 21:39:33 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	bytes;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	bytes = nmemb * size;
	if (bytes / nmemb != size)
		return (NULL);
	arr = (void *)malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
