/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 09:31:49 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/26 11:28:38 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*ft_new_line read a new line from the file descriptor fd
 * until \n, then gets the next line, or until \0, which
 * ends the program.*/

int				next_line(char **str, char **new_line, const int fd, int bytes)
{
	char	*temp;
	size_t	size;

	size = 0;
	while (str[fd][size] != '\n' && str[fd][size])
		size++;
	if (str[fd][size] =='\n')
	{
		*new_line = ft_strsub(str[fd], 0, size);
		temp = ft_strdup(str[fd] + size + 1);
		free(str[fd]);
		str[fd] = temp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][size] == '\0')
	{
		if (bytes == BUF_SIZE)
			return (get_next_line(fd, new_line));
		*new_line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

/*get_next_line does exactly what it says :D, it gets the nwxt line
 * from the file Des fd, or returns 0 when no more bytes are
 * read by read ie: EOF*/

int				get_next_line(const int fd, char **line)
{
	static char		*str[256];
	char			buff[BUF_SIZE + 1];
	char			*temp;
	int				bytes;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((bytes = read(fd, buff, BUF_SIZE)) > 0)
	{
		buff[bytes] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		temp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = temp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (bytes < 0)
		return (-1);
	else if (bytes == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (next_line(str, line, fd, bytes));
}
