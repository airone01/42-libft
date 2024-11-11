/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:42:17 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/11 12:43:36 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Tells if a character is in the ASCII tabe
 *
 * @param	c	character
 *
 * @returns	boolean result
 */
int	ft_isascii(int c)
{
	return (c <= 127 && c >= 0);
}
