/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:33:47 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/11 14:24:17 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The  memcpy()  function  copies  n bytes from memory area src to memory area
 * dest.  The memory areas must not overlap.  Use memmove(3) if the memory  ar‐
 * eas do overlap.
 *
 * @param	s	pointer
 * @param	c	constant byte
 * @param	n	size in number of bytes
 *
 * @returns	pointer to the memory area s
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dest2;

	if (!dest && !src)
		return (dest);
	if (n != 0)
	{
		src2 = (const unsigned char *) src;
		dest2 = (unsigned char *) dest;
		while (n-- > 0)
			*dest2++ = *src2++;
	}
	return (dest);
}
