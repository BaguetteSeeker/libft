/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:00:18 by epinaud           #+#    #+#             */
/*   Updated: 2024/10/04 02:43:29 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	read_errchk(int read_return)
{
	if (errno == EAGAIN || errno == EWOULDBLOCK)
		return (0);
	else if (errno == EBADF)
		return (0);
	else if (read_return > 0)
		return (read_return);
	else if (errno == EINTR)
		return (0);
	else if (errno == EIO)
		return (0);
	else if (read_return == 0)
		return (0);
	else if (read_return == -1)
		return (0);
	else
		return (0);
	return (1);
}

static char	*fetch_file_content(int fd)
{
	int		bytes_read;
	char	*buffer;

	buffer = ft_calloc(GNL_BUFFSIZ + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, GNL_BUFFSIZ);
	if (!read_errchk(bytes_read))
		return (free(buffer), NULL);
	return (buffer);
}

static char	*expand_current_line(char **currline, int fd)
{
	char	*lntmp;
	char	*next_read;

	next_read = fetch_file_content(fd);
	if (!next_read)
		return (NULL);
	lntmp = *currline;
	*currline = ft_strjoin(*currline, next_read);
	free(next_read);
	free(lntmp);
	return (*currline);
}

static char	*cut_nxt_nl(char **currline, char **stash, char *eol)
{
	char	*tmptr;

	*stash = ft_substr(*currline, eol - *currline + 1, ft_strlen(eol + 1));
	tmptr = ft_substr(*currline, 0, eol - *currline + 1);
	free(*currline);
	*currline = tmptr;
	return (*currline);
}

char	*get_next_line(int fd)
{
	static char	*nextline[1025];
	char		*currline;
	char		*eol;

	if (fd < 0 || fd > 1024 || GNL_BUFFSIZ < 1 || read(fd, 0, 0))
		return (free(nextline[fd]), nextline[fd] = NULL, NULL);
	if (!nextline[fd])
		currline = fetch_file_content(fd);
	else
		currline = nextline[fd];
	while (currline)
	{
		eol = ft_strchr(currline, '\n');
		if (eol)
		{
			if (eol[1])
				return (cut_nxt_nl(&currline, &nextline[fd], eol));
			return (nextline[fd] = NULL, currline);
		}
		if (!expand_current_line(&currline, fd))
			if (currline)
				return (nextline[fd] = NULL, currline);
	}
	return (currline);
}
