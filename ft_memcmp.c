/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:36:34 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:21:26 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s21;

	i = 0;
	s11 = (unsigned char *) s1;
	s21 = (unsigned char *) s2;
	while (i < n)
	{
		if (s11[i] != s21[i])
			return (s11[i] - s21[i]);
		i = i + 1;
	}
	return (0);
}
