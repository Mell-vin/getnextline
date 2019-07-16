/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:14:21 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/28 12:59:18 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*str_2;
	size_t	i;

	str = (char *)src;
	str_2 = (char *)dest;
	i = 0;
	if (!str_2 && str == NULL)
		return (NULL);
	while (i < n)
	{
		str_2[i] = str[i];
		i++;
	}
	return (dest);
}
