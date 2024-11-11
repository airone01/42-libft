/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:50:51 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/11 12:55:51 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Tells if a character is printable in the ASCII tabe
 *
 * @param	c	character
 *
 * @returns	boolean result
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
