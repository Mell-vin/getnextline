/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:28:01 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/25 14:47:31 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	a;
	int		i;

	a = (char)c;
	i = 0;
	while (str[i] != a)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)str + i);
}
