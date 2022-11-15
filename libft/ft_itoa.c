/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:56:52 by macastan          #+#    #+#             */
/*   Updated: 2022/11/15 12:08:15 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while (n != 0)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		len;
	long	num;

	num = n;
	len = size(n);
	r = malloc(sizeof(char) * (len +1));
	if (r == NULL)
		return (NULL);
	r[len] = '\0';
	if (num < 0)
	{
		r[0] = '-';
		num = num * -1;
	}
	else if (num == 0)
		r[0] = '0';
	while (num != 0)
	{
		--len;
		r[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (r);
}
