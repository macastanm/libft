/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:25:39 by macastan          #+#    #+#             */
/*   Updated: 2022/11/23 15:46:28 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
/*int	main(void)
{
	char *result;
	t_list *head;
	t_list *new;
	t_list *new2;
	t_list *new3;
	t_list *last;
	result = malloc(sizeof(t_list));
	head = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	new2 = malloc(sizeof(t_list));
	new3 = malloc(sizeof(t_list));
	last = malloc(sizeof(t_list));
	head->content = (char *)"head";
	head->next = NULL;
	new->content = (char *)"new";
	new->next = NULL;
	new2->content = (char *)"new2";
	new2->next = NULL;
	new3->content = (char *)"new3";
	new3->next = NULL;
	last->content = (char *)"ultimo";
        last->next = NULL;
	ft_lstadd_front(&new3, new2);
	ft_lstadd_front(&new2, new);
	ft_lstadd_front(&new, head);
	ft_lstadd_back(&new3, last);
	result = (char *)ft_lstlast(head)->content;
	printf("%s\n", result);
	return 0;
}*/
