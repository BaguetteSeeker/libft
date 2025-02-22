/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_typ.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:04:52 by epinaud           #+#    #+#             */
/*   Updated: 2025/02/22 22:35:01 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define XSTR(x) STR(x)
// #define STR(x) #x
// #pragma message "The value of lsttype: " XSTR(LL_TYP)
# ifndef LL_TYP
#  define LL_TYP t_list
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;
# endif