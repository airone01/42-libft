/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:50:27 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/12 17:16:17 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Applies the function ’f’ on each character of the string passed as argument,
 * passing its index as first argument. Each character is passed by address to
 * ’f’ to be modified if necessary.
 *
 * @param	s	the string on which to iterate
 * @param	f	the function to apply to each character
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (*s)
		f(i++, s++);
}
