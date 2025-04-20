/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:26:03 by epinaud           #+#    #+#             */
/*   Updated: 2025/04/20 00:40:05 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"
#include <stdio.h>
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
	return (NULL);
	list->content = malloc(sizeof(*content));
	// printf("Siz of tok using sizeof typeof : %lu\n Using sizeof only %lu", sizeof(typeof(*content)), sizeof(*content));
	if (!list->content)
		return (free(list), NULL);
	list->next = NULL;
	return (list);
}
