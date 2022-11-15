/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:53:40 by macastan          #+#    #+#             */
/*   Updated: 2022/11/09 15:53:51 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (n != 0)
	{
		while (src[i] != 0 && i < n - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (j);
}
