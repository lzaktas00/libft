/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:04:07 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:22:09 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*emptyarea;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	emptyarea = malloc(sizeof(char) * (len + 1));
	if (!emptyarea)
		return (NULL);
	ft_strlcpy(emptyarea, s + start, len + 1);
	return (emptyarea);
}
