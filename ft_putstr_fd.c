/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:22:44 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/12 17:30:38 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Outputs the string ’s’ to the given file descriptor.
 *
 * @param	s	the string to output
 * @param	fd	the file descriptor on which to write
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s) * sizeof(char));
}
