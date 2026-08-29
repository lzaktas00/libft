/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 20:42:20 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:21:17 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first_node;

	first_node = malloc(sizeof(t_list));
	if (!first_node)
		return (NULL);
	first_node->content = content;
	first_node->next = NULL;
	return (first_node);
}
