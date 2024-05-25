/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:02:01 by epinaud           #+#    #+#             */
/*   Updated: 2024/05/21 19:05:11 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(int nmemb, int size)
{
	int	arr[nmemb];
	int	i;
	if (nmemb == 0 || size == 0 || nmemb * size > 2147483647)
		return (0);

	while (i < nmemb)
	{
		*arr[i] = malloc(size);
		i++;
	}
}
