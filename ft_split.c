/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:17:35 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 17:17:35 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	cuenta;

	cuenta = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			cuenta++;
		while (*s && *s != c)
			s++;
	}
	return (cuenta);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	size_t palabras, i = 0, j, len;
	if (!s)
		return (NULL);
	palabras = ft_wordcount(s, c);
	array = (char **)malloc((palabras + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (i < palabras)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		array[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!array[i])
			return (NULL);
		j = 0;
		while (j < len)
			array[i][j++] = *s++;
		array[i++][j] = '\0';
	}
	array[i] = NULL;
	return (array);
}
