/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 03:29:20 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/20 13:20:57 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	nbr[32];
	int		sign;
	int		index;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	else
		sign = 0;
	nbr[31] = '\0';
	index = 30;
	while (n != 0)
	{
		nbr[index--] = (n % 10) + 48;
		n /= 10;
	}
	if (sign == 1)
		nbr[index--] = '-';
	return (ft_strdup(nbr + index + 1));
}
