/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:57:13 by macastan          #+#    #+#             */
/*   Updated: 2022/11/16 14:57:16 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include "libft.h"

//cc -Wall -Werror -Wextra main3.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strchr.c ft_strlen.c

int	main(void)
{
	char a = 'a';
	char b = 'B';
	char c = '5';
	char d[] = "amarelo azul preto rosa branco";
	char e = 'r';
	char f[] = "amarelo azul preto rosa branco";
	char g = 'r';
	
	printf("ft_toupper: %c\n", ft_toupper(a));
	printf("ft_toupper: %c\n", ft_toupper(b));
	printf("ft_toupper: %c\n", ft_toupper(c));
	printf("toupper: %c\n", toupper(a));
	printf("toupper: %c\n", toupper(b));
	printf("toupper: %c\n\n", toupper(c));

	printf("ft_tolower: %c\n", ft_tolower(a));
	printf("ft_tolower: %c\n", ft_tolower(b));
	printf("ft_tolower: %c\n", ft_tolower(c));
	printf("tolower: %c\n", tolower(a));
	printf("tolower: %c\n", tolower(b));
	printf("tolower: %c\n\n", tolower(c));
	
	printf("ft_strrchr: %s\n", ft_strrchr(d, e));
	printf("strrchr: %s\n\n", strrchr(d, e));
	
	printf("ft_strchr: %s\n", ft_strchr(f, g));
	printf("strchr: %s\n\n", strchr(f, g));
}
