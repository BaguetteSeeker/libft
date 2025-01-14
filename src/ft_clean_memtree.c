/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_memtree.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:19:36 by epinaud           #+#    #+#             */
/*   Updated: 2025/01/14 21:54:50 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_clean_memtree(char **ptr)
{
	char	**tmptr;

	if (!ptr)
		return (NULL);
	tmptr = ptr;
	while (*ptr)
		free(*ptr++);
	free(tmptr);
	return (NULL);
}
