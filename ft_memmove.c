/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikemart <mikemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:47:23 by mikemart          #+#    #+#             */
/*   Updated: 2024/12/27 13:47:23 by mikemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*destino;
	const unsigned char	*origen = (const unsigned char *)src;

	destino = (unsigned char *)dst;
	if (destino < origen)
	{
		while (len--)
			*destino++ = *origen++;
	}
	else
	{
		destino += len;
		origen += len;
		while (len--)
			*--destino = *--origen;
	}
	return (dst);
}
