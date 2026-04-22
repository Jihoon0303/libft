/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihchoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:46:25 by jihchoi           #+#    #+#             */
/*   Updated: 2026/04/22 16:22:11 by jihchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	strlen(const char *s)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	char	*str1 = "jihoon";
	char	*str2 = "sival sival";
	char	*str3 = " ";

	printf("str1: %zu\n", ft_strlen(str1)); // zu = a value of type size_t
	printf("str2: %zu\n", ft_strlen(str2)); // %d is for int
	printf("str3: %zu\n", ft_strlen(str3));	// size_t non-negative number

	return (0);
}
*/
