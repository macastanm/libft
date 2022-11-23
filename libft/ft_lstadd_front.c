/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:16:49 by macastan          #+#    #+#             */
/*   Updated: 2022/11/23 12:15:25 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*int	main(void)
{
	t_list	*head;
	t_list	*new;

	if (!(head = malloc(sizeof(t_list))))
		return 0;
	if (!(new = malloc(sizeof(t_list))))
		return 0;
	head->content = (char *)"head";
	head->next = NULL;
	new->content = (char *)"new";
	new->next = NULL;
	printf("head antes: %s\n\n", (char *)head->content);
	ft_lstadd_front(&head, new);
	printf("head depois: %s\n", (char *)head->content);
	return 0;
}*/
