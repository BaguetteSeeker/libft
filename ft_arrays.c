/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrays.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 04:26:15 by epinaud           #+#    #+#             */
/*   Updated: 2024/12/20 04:35:34 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	array_min(int arr[], size_t siz)
{
	int		min;
	size_t	i;

	i = 1;
	min = arr[0];
	while (i < siz)
	{
		if (min > arr[i])
			min = arr[i];
		i++;
	}
	return (min);
}

int	array_max(int arr[], size_t siz)
{
	int		max;
	size_t	i;

	i = 1;
	max = arr[0];
	while (i < siz)
	{
		if (max < arr[i])
			max = arr[i];
		i++;
	}
	return (max);
}

int	in_array(int val, int tab[], size_t siz)
{
	int	pos;

	pos = 0;
	while ((size_t)pos != siz)
	{
		if (tab[pos] == val)
			return (pos);
		pos++;
	}
	return (-1);
}
