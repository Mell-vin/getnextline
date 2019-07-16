/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:33:36 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/28 12:55:24 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)src;
	while (n != 0)
	{
		if (*str++ == (unsigned char)c)
			return (str - 1);
		n--;
	}
	return (NULL);
}
