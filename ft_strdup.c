/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:49:08 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/11 19:07:07 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Duplicates a string.
 *
 * @param	s	string to duplicate
 *
 * @returns	string if everything worked
 * @returns	NULL if malloc failed
 */
char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dst;

	dst = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return ((char *)dst);
}
