/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:00:18 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/12 19:07:21 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	read_errchk(int bytes_read)
{
	if (errno == EAGAIN || errno == EWOULDBLOCK)
		return (0);
	else if (errno == EBADF)
		return (0);
	else if (bytes_read > 0)
		return (bytes_read);
	else if (errno == EINTR)
		return (0);
	else if (errno == EIO)
		return (0);
	else if (bytes_read == 0)
		return (0);
	else if (bytes_read == -1)
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
	if (!read_errchk(bytes_read) || buffer[0] == '\0')
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
	if (lntmp)
		free(lntmp);
	return (*currline);
}

static char	*cut_nxt_nl(char **currln, char *remains, char *eol_curr)
{
	char	*tmptr;

	ft_bzero(remains, ft_strlen(remains));
	memmove(remains, eol_curr + 1, ft_strlen(eol_curr + 1));
	tmptr = ft_substr(*currln, 0, eol_curr - *currln + 1);
	free(*currln);
	*currln = tmptr;
	return (*currln);
}

char	*get_next_line(int fd)
{
	static char	remains[1024 + 1][GNL_BUFFSIZ + 1] = {0};
	char		*line;
	char		*eol;

	if (fd < 0 || fd > 1024 || GNL_BUFFSIZ < 1 || read(fd, 0, 0))
		return (NULL);
	if (!remains[fd][0])
		line = fetch_file_content(fd);
	else
		line = ft_strdup(remains[fd]);
	while (line)
	{
		eol = ft_strchr(line, '\n');
		if (eol)
		{
			if (eol[1])
				return (cut_nxt_nl(&line, remains[fd], eol));
			return (ft_bzero(remains[fd], ft_strlen(remains[fd])), line);
		}
		if (!expand_current_line(&line, fd) && line)
			return (ft_bzero(remains[fd], ft_strlen(remains[fd])), line);
	}
	return (line);
}
