/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:00:21 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/25 14:41:06 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		if (!(new = (char *)malloc(sizeof(char)
		* (ft_strlen(s1) + ft_strlen(s2)))))
			return (NULL);
		i = 0;
		while (s1[i])
		{
			new[i] = s1[i];
			i++;
		}
		j = -1;
		while (s2[++j])
		{
			new[i] = s2[j];
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
