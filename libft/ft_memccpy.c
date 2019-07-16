/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:38:10 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/18 12:10:02 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, char c, size_t n)
{
	size_t	i;
	char	*str;
	char	*str_2;

	str = (char *)src;
	str_2 = (char *)dest;
	i = 0;
	while (i < n)
	{
		str_2[i] = str[i];
		if (str[i] == c)
		{
			return (dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
