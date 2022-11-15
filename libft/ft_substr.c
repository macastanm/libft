/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:26:30 by macastan          #+#    #+#             */
/*   Updated: 2022/11/14 12:04:43 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	i = start;
	if (i >= ft_strlen(s))
	{
		str = malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * (len + 1));
	j = 0;
	if (str == NULL)
		return (NULL);
	while (i < ft_strlen(s) && len-- > 0)
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}
