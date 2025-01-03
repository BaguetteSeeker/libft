/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:44:32 by epinaud           #+#    #+#             */
/*   Updated: 2025/01/03 17:58:24 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	ft_lstadd_back(LL_TYP **lst, LL_TYP *new)
{
	LL_TYP	*blst;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	blst = ft_lstlast(*lst);
	blst->next = new;
}
