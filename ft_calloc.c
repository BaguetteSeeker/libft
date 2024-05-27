/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:02:01 by epinaud           #+#    #+#             */
/*   Updated: 2024/05/28 00:08:13 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb == 0 || size == 0 || nmemb * size > 2147483647)
		return (0);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return	(arr);
	ft_memset(arr, 0, nmemb * size);
	return (arr);
}
