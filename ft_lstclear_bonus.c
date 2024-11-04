/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:08:26 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/05 12:50:55 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lnkdlst.h"

void	ft_lstclear(LL_TYP **lst, void (*del)(LL_TYP *))
{
	LL_TYP	*tmplst;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		tmplst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmplst;
	}
}
