/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 03:07:39 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:22:00 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*emptyarea;

	if (!s || !f)
		return (NULL);
	emptyarea = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!emptyarea)
		return (NULL);
	i = 0;
	while (s[i])
	{
		emptyarea[i] = f(i, s[i]);
		i = i + 1;
	}
	emptyarea[i] = '\0';
	return (emptyarea);
}
