/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 11:16:21 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/26 11:35:59 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUF_SIZE 1

# include "fcntl.h"
# include "libft.h"
# include "sys/types.h"
# include "unistd.h"
# include "stdlib.h"
# include "sys/uio.h"

int			next_line(char **str, char **new_line,
			const int fd, int bytes);
int			get_next_line(const int fd, char **line);

#endif
