/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:39:06 by macastan          #+#    #+#             */
/*   Updated: 2022/11/11 15:45:52 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned int	total;
	size_t			i;
	char			*arr;

	i = 0;
	total = nitems * size;
	arr = malloc(nitems * size);
	if (arr == NULL)
		return (NULL);
	while (total > 0)
	{
		arr[i] = 0;
		total--;
		i++;
	}
	return ((void *)arr);
}
