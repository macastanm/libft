/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:08:15 by macastan          #+#    #+#             */
/*   Updated: 2022/11/23 17:27:37 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void	del(void *abc)
{
	free (abc);
}

int	main(void)
{
	char *result;
	t_list *head;
	t_list *new;
	t_list *new2;
	result = malloc(sizeof(t_list));
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
	ft_lstdelone(new, del);
	printf("\n%p\n", new);
	return (0);
}*/
