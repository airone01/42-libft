/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:59:54 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/11 13:27:59 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The  memset() function fills the first n bytes of the memory area pointed to
 * by s with the constant byte c.
 *
 * @param	s	pointer
 * @param	c	constant byte
 * @param	n	size in number of bytes
 *
 * @returns	pointer to the memory area s
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pt;

	if (n != 0)
	{
		pt = s;
		while (n != 0)
		{
			*pt++ = (unsigned char) c;
			n--;
		}
	}
	return (s);
}
