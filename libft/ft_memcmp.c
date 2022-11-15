/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:56:42 by macastan          #+#    #+#             */
/*   Updated: 2022/11/09 15:56:51 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;
	size_t			i;

	i = 0;
	mem1 = (unsigned char *)str1;
	mem2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (mem1[i] != mem2[i])
		{
			return (mem1[i] - mem2[i]);
		}
		i++;
	}
	return (0);
}
