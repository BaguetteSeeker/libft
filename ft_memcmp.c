/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:28:43 by epinaud           #+#    #+#             */
/*   Updated: 2024/05/27 16:16:31 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*s1ptr = (unsigned char *)s1;
	unsigned char	*s2ptr = (unsigned char *)s2;

	i = 0;
	while (i < n)
	{
		if (s1ptr[i] != s2ptr[i])
			return (int)(s1ptr[i] - s2ptr[i]);
		i++;
	}
	return (0);
}
