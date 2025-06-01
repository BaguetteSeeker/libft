/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:56:34 by epinaud           #+#    #+#             */
/*   Updated: 2025/06/01 11:58:43 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	strarr_iter(char **arr, void (*f)(char *str))
{
	size_t	i;

	i = 0;
	if (!arr || !f)
		return ;
	while (arr[i])
		f(arr[i++]);
}

char	**strarr_insert(char **origin, char *target, char **insert)
{
	char	**new_arr;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	new_arr = malloc(1 + (ft_ptrlen((const void **)origin)
				+ ft_ptrlen((const void **)insert)) * sizeof(char *));
	while (origin[i])
	{
		if (origin[i] == target)
		{
			while (insert[j])
				new_arr[k++] = insert[j++];
			i++;
		}
		else
			new_arr[k++] = origin[i++];
	}
	new_arr[k] = NULL;
	return (new_arr);
}
