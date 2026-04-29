/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihchoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:35:39 by jihchoi           #+#    #+#             */
/*   Updated: 2026/04/29 15:07:45 by jihchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char  const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	len_word;
	int	i;

	res = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len_word = ft_strlen(s);
			else
				len_word = ft_strchr(s, c) - s;
			res[i++] = ft_substr(s, 0, len_word);
			s += len_word;
		}
	}
	res[i] = NULL;
	return (res);
}


/*
 * #include "libft.h"
#include <stdlib.h>

static size_t  ft_wordcount(char const *s, char c)
{
    size_t count;

    count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return (count);
}

static char *ft_worddup(char const *s, size_t len)
{
    char    *word;
    size_t  i;

    word = malloc(len + 1);
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

static void ft_free_all(char **res, size_t i)
{
    while (i > 0)
    {
        free(res[i - 1]);
        i--;
    }
    free(res);
}

char    **ft_split(char const *s, char c)
{
    char    **res;
    size_t  i;
    size_t  len;

    if (!s)
        return (NULL);

    res = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
    if (!res)
        return (NULL);

    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;

        if (!*s)
            break;

        len = 0;
        while (s[len] && s[len] != c)
            len++;

        res[i] = ft_worddup(s, len);
        if (!res[i])
        {
            ft_free_all(res, i);
            return (NULL);
        }

        i++;
        s += len;
    }
    res[i] = NULL;
    return (res);
}*
