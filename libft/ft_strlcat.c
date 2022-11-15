/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:54:06 by macastan          #+#    #+#             */
/*   Updated: 2022/11/09 15:54:15 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendest;

	i = 0;
	lensrc = ft_strlen(src);
	if (n == 0)
		return (lensrc);
	lendest = ft_strlen(dest);
	if (n <= lendest)
		return (lensrc + n);
	while (lendest < (n - 1) && src[i] != '\0')
	{
		dest[lendest] = src[i];
		i++;
		lendest++;
	}
	dest[lendest] = '\0';
	return (lensrc + ft_strlen(dest) - i);
}
