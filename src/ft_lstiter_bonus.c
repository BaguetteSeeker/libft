/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:58:00 by epinaud           #+#    #+#             */
/*   Updated: 2025/04/20 00:32:30 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *))
{
	if (!f)
		return ;
	if (lst)
	{
		f(lst);
		ft_lstiter(lst->next, f);
	}
}
