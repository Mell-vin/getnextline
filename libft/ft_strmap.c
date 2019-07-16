/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 11:47:57 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/22 11:50:28 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*cpy;

	if (!(s) || !(f))
		return (NULL);
	cpy = ft_strnew(ft_strlen(s));
	if (!cpy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		cpy[i] = (*f)(s[i]);
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
