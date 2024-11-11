/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:08:14 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/05 15:17:46 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Tells if a character is a decimal digit
 *
 * @param	c	character
 *
 * @returns	boolean result
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
