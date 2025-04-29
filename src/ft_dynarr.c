/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_dynarr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:19:36 by epinaud           #+#    #+#             */
/*   Updated: 2025/01/14 21:54:50 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_dynarr(char **ptr)
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

void	put_dynarr_addr(char **ptr)
{
	int	i;

	ft_printf("Main ptr addr is %p —\n", ptr);
	i = 0;
	while (ptr[i])
	{
		ft_printf("Row %d addr is %p\n", i, ptr[i]);
		i++;
	}
}

void	put_recurse_dynarr(char **ptr)
{
	if (!ptr)
		return ;
	ft_printf("Recurse printing content within %p addr :\n", ptr);
	while (*ptr)
		ft_putendl_fd(*ptr++, STDOUT_FILENO);
	return ;
}
