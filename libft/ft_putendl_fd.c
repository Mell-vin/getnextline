/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:32:12 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/22 12:18:17 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putendl_fd(char const *s, int fd)
{
	if (s == NULL || fd == -1)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return ;
}
