/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:17:00 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 17:17:00 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t inicio, fin;
	if (!s1 || !set)
		return (NULL);
	inicio = 0;
	while (s1[inicio] && ft_strchr(set, s1[inicio]))
		inicio++;
	fin = ft_strlen(s1);
	while (fin > inicio && ft_strchr(set, s1[fin - 1]))
		fin--;
	return (ft_substr(s1, inicio, fin - inicio));
}
