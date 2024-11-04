/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:58:00 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/05 12:51:04 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lnkdlst.h"

void	ft_lstiter(LL_TYP *lst, void (*f)(LL_TYP *))
{
	if (!f)
		return ;
	if (lst)
	{
		ft_lstiter(lst->next, f);
		f(lst);
	}
}
