/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:17:55 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 17:17:55 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*juntar;

	size_t len1, len2;
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	juntar = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!juntar)
		return (NULL);
	ft_memcpy(juntar, s1, len1);
	ft_memcpy(juntar + len1, s2, len2);
	juntar[len1 + len2] = '\0';
	return (juntar);
}
