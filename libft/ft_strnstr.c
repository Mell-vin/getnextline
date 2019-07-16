/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:13:55 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/22 16:30:12 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (*s2 == '\0')
		return ((char*)s1);
	i = 0;
	while (*s1 && n)
	{
		if (*s1 == s2[i])
			i++;
		else
			i = 0;
		if (s2[i] == '\0')
			return ((char*)(s1 - i + 1));
		s1++;
		n--;
	}
	return (NULL);
}
