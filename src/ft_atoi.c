/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:45:30 by epinaud           #+#    #+#             */
/*   Updated: 2025/10/03 12:25:34 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	parse_long(const char *nptr, size_t *i, long *sum)
{
	while (nptr[*i] >= '0' && nptr[*i] <= '9')
	{
		if (LONG_MAX / 10 < *sum || *sum * 10 > LONG_MAX - (nptr[*i] - 48))
			return (false);
		*sum = *sum * 10 + nptr[*i] - 48;
		(*i)++;
	}
	return (true);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sum;
	int		sign;

	i = 0;
	sum = 0;
	sign = 1;
	while (ft_strchr(" \t\n\v\f\r", nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		sum = sum * 10 + nptr[i] - 48;
		i++;
	}
	return (sum *= sign);
}

static long	ft_powf(size_t pow, long n)
{
	long	result;

	result = 1;
	if (!pow || !n)
		return (0);
	while (n-- >= 1)
		result *= pow;
	return (result);
}

int	ft_atof(const char *nptr, float *sum)
{
	size_t	i;
	int		sign;
	long	mantissa;
	long	exponent;

	i = 0;
	sign = 1;
	mantissa = 0;
	exponent = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	if (!parse_long(nptr, &i, &exponent))
		return (0);
	if (nptr[i] != '.')
		return (*sum += exponent, *sum *= sign, i);
	if (++i && !parse_long(nptr, &i, &mantissa))
		return (0);
	return (*sum += exponent, *sum += ((float)mantissa
			/ ft_powf(10, ft_nbrdig(mantissa))), *sum *= sign, i);
}
