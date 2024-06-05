/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 01:12:11 by epinaud           #+#    #+#             */
/*   Updated: 2024/06/06 01:35:35 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	nlst;

	if (!f || !del)
		return (NULL);

	while (lst)
	{
		if (nlst = ft_lstnew((*f)(lst->content)))
		{
			ft_lstadd_back(&nlst, lst);
			lst = lst->next;
			break ;
		}

	}
}
