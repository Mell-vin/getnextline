/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 11:50:57 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/22 11:54:02 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	c;

	if (str)
	{
		i = 0;
		j = 0;
		while (str[j])
			j++;
		j = j - 1;
		while (j > i)
		{
			c = str[i];
			str[i] = str[j];
			str[j] = c;
			--j;
			++i;
		}
	}
	return (str);
}
