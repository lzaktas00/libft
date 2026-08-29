/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 18:51:59 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:21:51 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*emptyarea;

	if (!s1 || !s2)
		return (NULL);
	emptyarea = malloc(sizeof(char) * (ft_strlen(s2) + ft_strlen(s1) + 1));
	if (!emptyarea)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		emptyarea[i] = s1[i];
		i = i + 1;
	}
	j = 0;
	while (s2[j])
	{
		emptyarea[i + j] = s2[j];
		j = j + 1;
	}
	emptyarea[i + j] = '\0';
	return (emptyarea);
}
