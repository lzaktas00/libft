/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 18:54:54 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:21:42 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	wordinside;
	int	count;

	wordinside = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && wordinside == 0)
		{
			wordinside = 1;
			count++;
		}
		else if (*s == c)
			wordinside = 0;
		s++;
	}
	return (count);
}

static void	allofree(char **empty, int i)
{
	while (i >= 0)
		free(empty[i--]);
	free(empty);
}

static int	fillword(char **empty, char const *s, char c)
{
	size_t	i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			empty[j] = ft_substr(s, start, i - start);
			if (!empty[j])
				return (allofree(empty, j - 1), 0);
			j++;
			start = -1;
		}
		i++;
	}
	empty[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**empty;

	if (!s)
		return (NULL);
	empty = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!empty)
		return (NULL);
	if (!fillword(empty, s, c))
		return (NULL);
	return (empty);
}
