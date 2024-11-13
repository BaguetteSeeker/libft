/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:00:18 by epinaud           #+#    #+#             */
/*   Updated: 2024/11/13 03:47:14 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	read_errchk(int bytes_read)
{
	if (bytes_read > 0)
		return (bytes_read);
	else if (errno == EAGAIN || errno == EWOULDBLOCK)
		return (-1);
	else if (errno == EBADF)
		return (-1);
	else if (errno == EINTR)
		return (-1);
	else if (errno == EIO)
		return (-1);
	else if (bytes_read == -1 || bytes_read == -1)
		return (-1);
	return (-1);
}

static char	*fetch_file_content(int fd)
{
	int		bytes_read;
	char	*buffer;

	buffer = ft_calloc(GNL_BUFFSIZ + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, GNL_BUFFSIZ);
	if (read_errchk(bytes_read) == -1 || buffer[0] == '\0')
		return (free(buffer), NULL);
	return (buffer);
}

static char	*expand_current_line(char **line, int fd)
{
	char	*lntmp;
	char	*buffer;

	buffer = fetch_file_content(fd);
	if (!buffer)
		return (NULL);
	lntmp = *line;
	*line = ft_strjoin(*line, buffer);
	free(buffer);
	free(lntmp);
	return (*line);
}

static char	*cut_nxt_nl(char **currln, char *remains, char *eol_curr)
{
	char	*tmptr;

	ft_bzero(remains, ft_strlen(remains));
	ft_memmove(remains, eol_curr + 1, ft_strlen(eol_curr + 1));
	tmptr = ft_substr(*currln, 0, eol_curr - *currln + 1);
	free(*currln);
	*currln = tmptr;
	return (*currln);
}

char	*get_next_line(int fd)
{
	static char	remains[4096 + 1][GNL_BUFFSIZ + 1] = {0};
	char		*line;
	char		*eol;

	if (fd < 0 || fd > 4096 || GNL_BUFFSIZ < 1 || read(fd, 0, 0))
		return (ft_bzero(remains[fd], ft_strlen(remains[fd])), NULL);
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
