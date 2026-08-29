/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:16:18 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:21:46 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*emptyarea;

	emptyarea = ft_calloc(sizeof(char), (ft_strlen(s) + 1));
	if (emptyarea == NULL)
		return (NULL);
	ft_strlcpy(emptyarea, s, ft_strlen(s) + 1);
	return (emptyarea);
}
