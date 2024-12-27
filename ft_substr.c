/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:16:49 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 17:16:49 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subcadena;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	subcadena = (char *)malloc(sizeof(char) * (len + 1));
	if (!subcadena)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		subcadena[i] = s[start + i];
		i++;
	}
	subcadena[i] = '\0';
	return (subcadena);
}
