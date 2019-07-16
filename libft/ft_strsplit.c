/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:36:38 by lgumede           #+#    #+#             */
/*   Updated: 2019/06/25 13:47:56 by lgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_word(const char *s, char c)
{
	size_t			i;
	static size_t	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static size_t		words(const char *str, char s)
{
	size_t			i;
	static size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == s)
			i++;
		if (str[i] != s && str[i])
			count++;
		while (str[i] != s && str[i])
			i++;
	}
	return (count);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**new;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	new = (char **)malloc((sizeof(*new) * words(s, c)) + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < words(s, c))
	{
		k = 0;
		if (!(new[j] = (char *)malloc(sizeof(char) * ft_word(&s[i], c) + 1)))
			new[j] = NULL;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			new[j][k++] = s[i++];
		new[j][k] = '\0';
	}
	new[j] = NULL;
	return (new);
}
