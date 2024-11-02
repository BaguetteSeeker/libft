/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_memtree.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:19:36 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/02 15:27:58 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_clean_memtree(char **ptr)
{
	char	**dptr_strt;

	if (!ptr)
		return (NULL);
	dptr_strt = ptr;
	while (*ptr)
		free(*ptr++);
	free(dptr_strt);
	return (NULL);
}
