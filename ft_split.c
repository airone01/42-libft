/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:48:43 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/12 11:09:59 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocates and cuts a word from `start` to `finish`.
 *
 * @param	str		source string
 * @param	start	starting index
 * @param	finish	ending index
 *
 * @returns duplicated and cut string
 */
char	*ft_strcut(char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

/*
 * Stupid function that saves space for the norm.
 */
void	ft_split_stupid(size_t ij[2], char *str, int *index, char **split)
{
	split[ij[1]++] = ft_strcut(str, *index, ij[0]);
	*index = -1;
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

/*
 * Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter. The array must end
 * with a NULL pointer.
 *
 * @param	str	string to split
 * @param	c	delimiter
 *
 * @returns	array of strings
 * @returns	if didn't find the delimiter,
 * 			array of strings with `s` inside
 */
char	**ft_split(char *str, char c)
{
	size_t	ij[2];
	int		index;
	char	**split;

	if (str == NULL)
		return (NULL);
	split = ft_calloc(count_words(str, c) + 1, sizeof(char *));
	if (!str || !(split))
		return (0);
	ij[0] = 0;
	ij[1] = 0;
	index = -1;
	while (ij[0] <= (size_t)ft_strlen(str))
	{
		if (str[ij[0]] != c && index < 0)
			index = ij[0];
		else if ((str[ij[0]] == c || ij[0] == (size_t)ft_strlen(str))
			&& index >= 0)
			ft_split_stupid(ij, str, &index, split);
		ij[0]++;
	}
	split[ij[1]] = 0;
	return (split);
}
