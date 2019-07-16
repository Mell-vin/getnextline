/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:51:52 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/22 12:15:19 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*str_2;

	if (!dest && src == NULL)
		return (NULL);
	str = (char *)src;
	str_2 = (char *)dest;
	if (dest > src)
	{
		while (n > 0)
		{
			str_2[n - 1] = str[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
