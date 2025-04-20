/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 01:12:11 by epinaud           #+#    #+#             */
/*   Updated: 2025/04/20 00:32:30 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

t_list	*ft_lstmap(t_list *lst, t_list*(*f)(t_list *), void (*del)(t_list *))
{
	t_list	*nlst;
	t_list	*nstart;

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
