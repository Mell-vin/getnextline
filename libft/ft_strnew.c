/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 10:00:05 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/25 14:35:40 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	size_t	i;
	char	*new;

	new = (char *)malloc(sizeof(char) * size + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= size)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
