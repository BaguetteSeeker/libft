/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:45:30 by epinaud           #+#    #+#             */
/*   Updated: 2025/10/22 20:56:46 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int	ft_atoi2(const char *nptr, long *sum)
{
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (__INT_MAX__ / 10 < *sum || *sum * 10 > INT_MAX - (nptr[i] - 48))
			return (-1);
		*sum = *sum * 10 + nptr[i] - 48;
		i++;
	}
	return (*sum *= sign, i);
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

int	ft_atof(const char *nptr, double *sum)
{
	int		exptln;
	int		mantln;
	long	exponent;
	long	mantissa;

	exponent = 0;
	mantissa = 0;
	exptln = ft_atoi2(nptr, &exponent);
	*sum += exponent;
	if (exptln < 1 || nptr[exptln] != '.')
		return (exptln);
	mantln = ft_atoi2(&nptr[exptln + 1], &mantissa);
	if (mantln == -1)
		return (-1);
	else if (mantln == 0)
		return (exptln + mantln);
	return (*sum += ((double)mantissa
			/ ft_powf(10, ft_nbrdig(mantissa))), exptln + mantln + 1);
}
