/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:19:58 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 17:19:58 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nueva;
	size_t	i;

	if (!s || !f)
		return (NULL);
	nueva = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!nueva)
		return (NULL);
	i = 0;
	while (s[i])
	{
		nueva[i] = f(i, s[i]);
		i++;
	}
	nueva[i] = '\0';
	return (nueva);
}
