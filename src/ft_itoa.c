/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:05:27 by epinaud           #+#    #+#             */
/*   Updated: 2025/05/05 16:32:37 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	lnum;
	size_t		count;
	char		*str;

	lnum = n;
	if (lnum == 0)
		return (ft_strdup("0"));
	count = ft_nbrlen(n);
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[count--] = '\0';
	if (lnum < 0)
	{
		str[0] = '-';
		lnum = -lnum;
	}
	while (lnum > 0)
	{
		str[count--] = lnum % 10 + '0';
		lnum /= 10;
	}
	return (str);
}
