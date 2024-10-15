/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:05:27 by epinaud           #+#    #+#             */
/*   Updated: 2024/10/08 13:07:13 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	lnum;
	size_t		count;
	char		*str;

	lnum = n;
	count = ft_nbrlen(n);
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[count--] = '\0';
	if (lnum == 0)
		str[0] = '0';
	if (lnum < 0)
	{
		str[0] = '-';
		lnum = -lnum;
	}
	while (lnum > 0)
	{
		str[count] = lnum % 10 + '0';
		count--;
		lnum /= 10;
	}
	return (str);
}
