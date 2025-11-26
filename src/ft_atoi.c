/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:45:30 by epinaud           #+#    #+#             */
/*   Updated: 2025/11/26 02:11:43 by epinaud          ###   ########.fr       */
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

int	ft_atoi2(const char *nptr, int *sum)
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

//Similar to atoi2, but doesn't apply sign
//Solely for internal atof() use
static int	ft_atoi_unsigned(const char *nptr, long *sum)
{
	size_t	i;

	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (__INT_MAX__ / 10 < *sum || *sum * 10 > INT_MAX - (nptr[i] - 48))
			return (-1);
		*sum = *sum * 10 + nptr[i] - 48;
		i++;
	}
	return (i);
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
	int		sign;

	if (*nptr == '-')
		sign = -1;
	else
		sign = 1;
	exponent = 0;
	mantissa = 0;
	exptln = ft_atoi_unsigned(nptr, &exponent);
	*sum += exponent;
	if (exptln < 1 || nptr[exptln] != '.')
		return (exptln);
	mantln = ft_atoi_unsigned(&nptr[exptln + 1], &mantissa);
	if (mantln == -1)
		return (-1);
	else if (mantln == 0)
		return (exptln + mantln);
	*sum += (float)mantissa / ft_powf(10, ft_nbrdig(mantissa));
	return (*sum *= sign, exptln + mantln + 1);
}
