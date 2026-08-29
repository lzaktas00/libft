/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:08:18 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:21:28 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		while (i < n)
		{
			((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
			i = i + 1;
		}
	}
	if (!(dest < src))
	{
		i = n;
		while (i > 0)
		{
			i = i - 1;
			((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
		}
	}
	return (dest);
}
