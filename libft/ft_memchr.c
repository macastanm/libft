/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:56:17 by macastan          #+#    #+#             */
/*   Updated: 2022/11/09 15:56:30 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*memstr;
	size_t		i;

	memstr = (const char *) str;
	i = 0;
	while (i < n)
	{
		if (memstr[i] == c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
