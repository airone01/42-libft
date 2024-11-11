/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:29:06 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/11 15:52:10 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * If c is an uppercase letter, tolower() returns its lowercase equivalent,  if
 * a  lowercase representation exists in the current locale.  Otherwise, it re‐
 * turns c.  The tolower_l() function performs the same task, but uses the  lo‐
 * cale referred to by the locale handle locale.
 *
 * @param	c	character
 *
 * @returns	uppercase character or c i fthe conversion was not possible
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
