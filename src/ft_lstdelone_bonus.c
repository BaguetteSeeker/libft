/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:49:59 by epinaud           #+#    #+#             */
/*   Updated: 2025/05/12 11:55:48 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	ft_lstdelone(LL_TYP *lst, void (*del)(LL_TYP *lst))
{
	if (lst)
	{
		if (!del)
			del(lst);
		free(lst);
	}
}
