/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:37:55 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/05 12:51:08 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lnkdlst.h"

LL_TYP	*ft_lstlast(LL_TYP *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
