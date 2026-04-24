/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihchoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:28:35 by jihchoi           #+#    #+#             */
/*   Updated: 2026/04/24 03:09:14 by jihchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

// memory
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);

// string
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlen(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
char    *ft_strdup(const char   *s);

// conversion
int	ft_atoi(const char *str);
int     ft_tolower(int c);
int     ft_toupper(int c);
		
// check
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);

#endif
