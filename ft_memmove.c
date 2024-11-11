/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:33:47 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/11 14:23:56 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	does_overlap(const void *src, const void *dest, size_t n)
{
	const unsigned char	*src_start = (const unsigned char*)src;
	const unsigned char	*src_end = src_start + n;
	const unsigned char	*dest_start = (const unsigned char*)dest;
	const unsigned char	*dest_end = dest_start + n;

	return (src_start < dest_end && dest_start < src_end);
}

/*
 * The  memmove()  function  copies n bytes from memory area src to memory area
 * dest.  The memory areas may overlap: copying takes place as though the bytes
 * in  src are first copied into a temporary array that does not overlap src or
 * dest, and the bytes are then copied from the temporary array to dest.
 *
 * @param	s	pointer
 * @param	c	constant byte
 * @param	n	size in number of bytes
 *
 * @returns	pointer to the memory area s
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dest2;

	if (!dest && !src)
		return (dest);
	if (n == 0)
		return (dest);
	src2 = src;
	dest2 = dest;
	if ((dest2 > src2) && (dest2 < src2 + n))
	{
		dest2 += n;
		src2 += n;
		while (n--)
			*--dest2 = *--src2;
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}