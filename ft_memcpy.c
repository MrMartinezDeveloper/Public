/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:47:13 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 13:47:13 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*destino;
	const unsigned char	*origen = (const unsigned char *)src;

	destino = (unsigned char *)dst;
	while (n--)
		*destino++ = *origen++;
	return (dst);
}
