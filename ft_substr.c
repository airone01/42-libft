/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:19:50 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/12 18:04:35 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocates (with malloc(3)) and returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.
 *
 * @param	s		the string from which to create the substring
 * @param	start	the start index of the substring in the string ’s’.
 * @param	len		the maximum length of the substring.
 *
 * @returns	the substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (start >= ft_strlen(s))
	{
		dst = ft_calloc(1, sizeof(char));
		if (!dst)
			return (0);
		dst[0] = '\0';
		return (dst);
	}
	s = &(s[start]);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	dst = ft_calloc(len + 1, sizeof(char));
	if (!dst)
		return (0);
	ft_strlcpy(dst, s, len + 1);
	return (dst);
}
