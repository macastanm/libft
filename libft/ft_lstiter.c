/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:40:21 by macastan          #+#    #+#             */
/*   Updated: 2022/11/24 14:15:50 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void	f(void *conteudo)
{
	printf("quando entra na f: %s\n", (char *)conteudo);
}

int	main(void)
{
	t_list *head;
	t_list *new;
	t_list *new2;
	head = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	new2 = malloc(sizeof(t_list));
	head->content = (char *)"head";
	head->next = NULL;
	new->content = (char *)"new";
	new->next = NULL;
	new2->content = (char *)"new2";
	new2->next = NULL;
	ft_lstadd_front(&new2, new);
	ft_lstadd_front(&new, head);
	printf("%s,%s,%s\n", (char *)head->content, (char *)head->next->content,
										(char *)head->next->next->content);
	ft_lstiter(head, f);
	return (0);
}*/
