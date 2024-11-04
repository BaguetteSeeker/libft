/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:52:00 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/05 12:50:50 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lnkdlst.h"

void	ft_lstadd_front(LL_TYP **lst, LL_TYP *new)
{
	if (lst && new)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
