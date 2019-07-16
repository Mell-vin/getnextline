/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 10:45:55 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/22 10:48:32 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memset(void *str, int c, size_t size)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (str);
}