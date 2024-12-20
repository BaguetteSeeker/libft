/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 01:12:11 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/05 12:51:13 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lnkdlst.h"

LL_TYP	*ft_lstmap(LL_TYP *lst, LL_TYP*(*f)(LL_TYP *), void (*del)(LL_TYP *))
{
	LL_TYP	*nlst;
	LL_TYP	*nstart;

	if (!f || !del)
		return (NULL);
	nstart = NULL;
	while (lst)
	{
		nlst = ft_lstnew((*f)(lst));
		if (nlst)
		{
			ft_lstadd_back(&nstart, nlst);
			lst = lst->next;
			continue ;
		}
		ft_lstclear(&nstart, del);
		lst = NULL;
		return (NULL);
	}
	return (nstart);
}
