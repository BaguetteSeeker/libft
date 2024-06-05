/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:08:26 by epinaud           #+#    #+#             */
/*   Updated: 2024/06/06 00:50:06 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmplst;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		tmplst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmplst;
	}
}
