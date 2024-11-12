/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:22:44 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/12 17:27:21 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Outputs the string ’s’ to the given file descriptor followed by a newline.
 *
 * @param	c	the character to output
 * @param	fd	the file descriptor on which to write
 */
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s) * sizeof(char));
	write(fd, "\n", sizeof(char));
}
