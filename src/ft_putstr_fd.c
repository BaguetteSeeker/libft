/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:36:30 by epinaud           #+#    #+#             */
/*   Updated: 2025/03/24 11:37:19 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}

void	ft_putstrcap_fd(char *s, size_t cap, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (*s && i < (int)cap)
	{
		ft_putchar_fd(*s++, fd);
		i++;
	}
}

void	put_addrlst(char **ptr)
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

void	recurse_put(char **ptr)
{
	if (!ptr)
		return ;
	ft_printf("Recurse printing content within %p addr :\n", ptr);
	while (*ptr)
		ft_putendl_fd(*ptr++, STDOUT_FILENO);
	return ;	
}