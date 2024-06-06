/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:41:48 by epinaud           #+#    #+#             */
/*   Updated: 2024/06/06 22:26:51 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s3len;
	size_t	i;
	size_t	j;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	s3len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(sizeof(char) * (s3len + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < s3len)
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}
