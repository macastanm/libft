/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:52:53 by macastan          #+#    #+#             */
/*   Updated: 2022/11/09 15:53:04 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*memsrc;
	unsigned char	*memdest;
	size_t			i;

	if (src == NULL && dest == NULL)
		return (dest);
	memsrc = (unsigned char *)src;
	memdest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		memdest[i] = memsrc[i];
		i++;
	}
	return (memdest);
}
