/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:26:03 by epinaud           #+#    #+#             */
/*   Updated: 2025/01/03 17:58:24 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

LL_TYP	*ft_lstnew(LL_TYP *content)
{
	LL_TYP	*list;

	list = malloc(sizeof(LL_TYP));
	if (!list)
		return (NULL);
	*list = *content;
	list->next = NULL;
	return (list);
}
