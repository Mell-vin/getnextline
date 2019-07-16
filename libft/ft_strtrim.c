/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:05:59 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/21 14:49:53 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*new;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (ft_memalloc(sizeof(char) * 2));
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	if (!(new = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	k = 0;
	while (k < j - i + 1)
	{
		new[k] = s[i + k];
		k++;
	}
	new[k] = '\0';
	return (new);
}
