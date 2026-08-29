/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 20:22:45 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:21:24 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest1;
	const unsigned char	*src1;

	i = 0;
	dest1 = (unsigned char *) dest;
	src1 = (const unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dest1[i] = src1[i];
		i = i + 1;
	}
	return (dest);
}
