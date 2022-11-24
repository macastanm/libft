/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:27:36 by macastan          #+#    #+#             */
/*   Updated: 2022/11/24 12:01:44 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*temp;
	t_list	*prox;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		prox = temp->next;
		del(temp->content);
		free(temp);
		temp = prox;
	}
	*lst = NULL;
}
/*void	del(void *nod)
{
	free (nod);
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
	printf("%p %p %p %p\n", head, head->next, head->next->next,
									head->next->next->next);
	ft_lstclear(&new, del);
	printf("\n%s\n",(char *)head->content);
	return (0);
}*/
