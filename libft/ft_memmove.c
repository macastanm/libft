/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:53:15 by macastan          #+#    #+#             */
/*   Updated: 2022/11/09 15:53:27 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*memsrc;
	unsigned char	*memdest;
	size_t			i;

	memsrc = (unsigned char *)src;
	memdest = (unsigned char *)dest;
	i = 0;
	if (dest > src)
	{
		while (n)
		{
			n--;
			memdest[n] = memsrc[n];
		}
	}
	if (dest < src)
	{
		while (n)
		{
			n--;
			memdest[i] = memsrc[i];
			i++;
		}
	}
	return (memdest);
}
