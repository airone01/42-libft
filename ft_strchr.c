/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:53:50 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/11 16:24:35 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The strchr() function returns a pointer to the first occurrence of the char‐
 * acter c in the string s.
 *
 * @param	s	haystack
 * @param	c	needle
 *
 * @returns	pointer to the matched character or NULL if the character is not
 * found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
