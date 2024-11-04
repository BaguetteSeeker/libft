/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:49:59 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/05 12:50:59 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lnkdlst.h"

void	ft_lstdelone(LL_TYP *lst, void (*del)(LL_TYP *lst))
{
	if (!del)
		return ;
	if (lst)
	{
		del(lst);
		free(lst);
	}
}
