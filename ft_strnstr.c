/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:48:35 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 13:48:35 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	longitud_needle;

	longitud_needle = ft_strlen(needle);
	if (!longitud_needle)
		return ((char *)haystack);
	while (*haystack && len-- >= longitud_needle)
	{
		if (!ft_memcmp(haystack, needle, longitud_needle))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
