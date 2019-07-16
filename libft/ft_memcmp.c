/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:33:52 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/20 09:51:24 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*arr1;
	unsigned char	*arr2;

	if (str1 == str2 || n == 0)
		return (0);
	arr1 = (unsigned char *)str1;
	arr2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (arr1[i] != arr2[i])
			return (arr1[i] - arr2[i]);
		i++;
	}
	return (0);
}
