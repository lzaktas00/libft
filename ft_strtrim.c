/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 12:10:07 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:22:13 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start_i;
	int	end;

	if (!s1 || !set)
		return (NULL);
	start_i = 0;
	while (s1[start_i] && ft_strchr(set, s1[start_i]))
	{
		start_i++;
	}
	end = ft_strlen(s1);
	while (end > start_i && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	return (ft_substr(s1, start_i, end - start_i));
}
