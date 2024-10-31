/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_memtree.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:19:36 by epinaud           #+#    #+#             */
/*   Updated: 2024/10/31 18:13:28 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_clean_memtree(char **ptr)
{
	if (!ptr)
		return (NULL);
	while (*ptr)
		free(*ptr++);
	free(ptr);
	return (NULL);
}
