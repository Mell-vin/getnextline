/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 11:01:42 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/28 12:57:34 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest,
				const char *src, size_t n)
{
	size_t i;
	size_t j;

	if (n < ft_strlen(dest))
		return (n + ft_strlen(src));
	i = 0;
	while (dest[i] && i < n)
		i++;
	j = i;
	while (src[i - j] && (i < (n - 1)))
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < n)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}
