/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:32:58 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/12 11:54:36 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

// Standard C lib
unsigned int	ft_strlcat(char *dst, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_bzero(void *s, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
long			ft_atol(const char *nptr);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_atoi(const char *nptr);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
//	Part 2
char			**ft_split(char *str, char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa_base(int n, const char *b);
char			*ft_itoa(int n);

// Bonuses

#endif
