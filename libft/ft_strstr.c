/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:13:18 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/22 16:27:20 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *hay, const char *needle)
{
	size_t i;
	size_t needle_i;
	size_t match;

	i = 0;
	match = 0;
	needle_i = 0;
	while (needle[match] != '\0')
		match++;
	if (match == 0)
		return ((char *)hay);
	while (hay[i])
	{
		while (needle[needle_i] == hay[i + needle_i])
		{
			if (needle_i == match - 1)
				return ((char *)hay + i);
			needle_i++;
		}
		needle_i = 0;
		i++;
	}
	return (0);
}
