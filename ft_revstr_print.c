/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:09:26 by epinaud           #+#    #+#             */
/*   Updated: 2024/10/05 17:00:52 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/libft.h"

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

static char *ftt_strrchr(char *str, char c)
{
	char	*strstart;

	strstart = str;
	while (*str)
		str++;
	if (c == '\0')
		return (str);
	while (str != strstart - 1)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (NULL);
}

int	main(int argc, char *argv[])
{
	//int	paramlen;
	char	*spcloc;

	if (argc < 2)
	{
		write(1, &"\n", 1);
		return (0);
	}
	
	spcloc = argv[1];
	while ((spcloc = ftt_strrchr(argv[1], ' ')))
	{
		ft_putstr(spcloc + 1);
		ft_putchar_fd(' ', 1);
		*spcloc = '\0';
		spcloc--;
	}
	ft_putstr(argv[1]);
}

/*#include "libft/printf/printf.h"
#include "libft/libft.h"

static char *ftt_strrchr(char *str, char c)
{
	char	*strstart;

	strstart = str;
	while (*str)
		str++;
	if (c == '\0')
		return (str);
	while (str != strstart - 1)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (NULL);
}

int	main(int argc, char *argv[])
{
	//int	paramlen;
	char	*bktrk_str;

	if (argc < 2)
	{
		write(1, &"\n", 1);
		return (0);
	}
	
	bktrk_str = ftt_strrchr(argv[1], ' ');
	while (bktrk_str && bktrk_str != argv[1])
	{
		ft_putstr(bktrk_str + 1);
		if (*bktrk_str == ' ')
		{
			ft_printf("%d\n", *bktrk_str);
			*bktrk_str = '\0';
			bktrk_str--;
		}
		bktrk_str = ftt_strrchr(bktrk_str, ' ');
	}

}*/
