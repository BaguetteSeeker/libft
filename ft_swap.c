/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 04:31:48 by epinaud           #+#    #+#             */
/*   Updated: 2024/12/20 04:32:00 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(long *val1, long *val2)
{
	long	tmpval;

	tmpval = *val1;
	*val1 = *val2;
	*val2 = tmpval;
}
