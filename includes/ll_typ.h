/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_typ.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:04:52 by epinaud           #+#    #+#             */
/*   Updated: 2025/04/06 15:28:23 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define XSTR(x) STR(x)
// #define STR(x) #x
// #pragma message "The value of lsttype: " XSTR(LL_TYP)
#ifndef LL_TYP_H
# define LL_TYP_H t_list

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;
#endif
