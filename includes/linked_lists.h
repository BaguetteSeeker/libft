/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:35:30 by epinaud           #+#    #+#             */
/*   Updated: 2025/05/12 12:06:26 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LISTS_H
# define LINKED_LISTS_H
# include "stdlib.h"

// #define XSTR(x) STR(x)
// #define STR(x) #x
// #pragma message "The value of lsttype: " XSTR(LL_TYP)
# ifndef LL_TYP
#  define LL_TYP t_list

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
# endif

LL_TYP		*ft_lstnew(LL_TYP *content);
void		ft_lstadd_front(LL_TYP **lst, LL_TYP *new);
int			ft_lstsize(LL_TYP *lst);
LL_TYP		*ft_lstlast(LL_TYP *lst);
void		ft_lstadd_back(LL_TYP **lst, LL_TYP *new);
void		ft_lstdelone(LL_TYP *lst, void (*del)(LL_TYP *));
void		ft_lstclear(LL_TYP **lst, void (*del)(LL_TYP *));
void		ft_lstiter(LL_TYP *lst, void (*f)(LL_TYP *));
LL_TYP		*ft_lstmap(LL_TYP *lst, LL_TYP *(*f)(LL_TYP *),
				void (*del)(LL_TYP *));
#endif
