/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:01:03 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:20:38 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*emptyarea;

	if (nmemb != 0 && size > (size_t) - 1 / nmemb)
		return (NULL);
	emptyarea = malloc(nmemb * size);
	if (!emptyarea)
		return (NULL);
	ft_bzero(emptyarea, nmemb * size);
	return (emptyarea);
}
