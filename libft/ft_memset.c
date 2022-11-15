/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:52:06 by macastan          #+#    #+#             */
/*   Updated: 2022/11/09 15:52:16 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = str;
	while (i < n)
	{
		mem[i] = c;
		i++;
	}
	return (mem);
}
