/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 01:12:11 by epinaud           #+#    #+#             */
/*   Updated: 2024/06/06 21:34:45 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nstart;

	if (!f || !del)
		return (NULL);
	nstart = NULL;
	while (lst)
	{
		nlst = ft_lstnew((*f)(lst->content));
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
