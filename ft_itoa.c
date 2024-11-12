/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:19:05 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/12 12:16:21 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Calculates the length of digits needed to represent an integer as a string,
 * including the minus sign for negative numbers.
 *
 * @param	n	the integer to measure
 * @param	b	base
 *
 * @returns	total length needed for the string representation:
 * 			- for 0: returns 1
 * 			- for negative numbers: number of digits + 1 (for the minus sign)
 * 			- for positive numbers: number of digits
 *
 * Examples:
 * - get_num_len(0)    returns 1 ("0")
 * - get_num_len(123)  returns 3 ("123")
 * - get_num_len(-123) returns 4 ("-123")
 * - get_num_len(-0)   returns 1 ("0")
 */
size_t	get_num_len(int n, const char *b)
{
	size_t	len;
	size_t	bl;
	long	num;

	len = 0;
	if (n <= 0)
		len = 1;
	bl = ft_strlen(b);
	num = n;
	if (n < 0)
		num = -(long)n;
	while (num > 0)
	{
		num /= bl;
		len++;
	}
	return (len);
}

/*
 * Fills a pre-allocated string with the string representation of an integer.
 * The function handles negative numbers and writes directly into the provided
 * string buffer.
 *
 * @param	str	pre-allocated string buffer to write into. Must be large enough
 * 				to hold the number plus null terminator (len + 1 bytes)
 * @param	n	the integer to convert to a string
 * @param	len	the length of the final string (excluding null terminator),
 * 				must match the actual space needed for the number
 * @param	b	base
 */
void	fill_number(char *s, int n, int len, const char *b)
{
	size_t	bl;
	long	num;
	int		is_negative;

	bl = ft_strlen(b);
	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	num = n;
	if (is_negative)
		num = -(long)n;
	s[len] = '\0';
	while (len > is_negative)
	{
		len--;
		s[len] = b[num % bl];
		num /= bl;
	}
	if (is_negative)
		s[0] = '-';
}

/*
 * Allocates (with malloc(3)) and returns a string representing the integer
 * received as an argument. Negative numbers must be handled.
 * (base-dependant version)
 *
 * @param	n	number
 * @param	b	base
 *
 * @returns	infered string
 */
char	*ft_itoa_base(int n, const char *b)
{
	size_t	len;
	char	*s;

	len = get_num_len(n, b);
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (0);
	fill_number(s, n, len, b);
	return (s);
}

/*
 * Allocates (with malloc(3)) and returns a string representing the integer
 * received as an argument. Negative numbers must be handled.
 *
 * @param	n	number
 *
 * @returns	infered string
 */
char	*ft_itoa(int n)
{
	return (ft_itoa_base(n, "0123456789"));
}
