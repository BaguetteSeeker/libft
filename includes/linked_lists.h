/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:35:30 by epinaud           #+#    #+#             */
/*   Updated: 2025/04/20 00:38:00 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LISTS_H
# define LINKED_LISTS_H
# include "stdlib.h"
# include "../../ll_typ.h"

// #define XSTR(x) STR(x)
// #define STR(x) #x
// #pragma message "The value of lsttype: " XSTR(t_list)
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(t_list *));
void		ft_lstclear(t_list **lst, void (*del)(t_list *));
void		ft_lstiter(t_list *lst, void (*f)(t_list *));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *),
				void (*del)(t_list *));
#endif
