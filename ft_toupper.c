/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:29:06 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/11 17:09:29 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * If  c  is a lowercase letter, toupper() returns its uppercase equivalent, if
 * an uppercase representation exists in the current locale.  Otherwise, it re‐
 * turns  c.  The toupper_l() function performs the same task, but uses the lo‐
 * cale referred to by the locale handle locale.
 *
 * @param	c	character
 *
 * @returns	uppercase character or c i fthe conversion was not possible
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
