/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:45:36 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 16:21:20 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>

int	main()
{
	t_list	*head;

	head = ft_lstnew("C");
	ft_lstadd_front(&head, ft_lstnew("B"));
	ft_lstadd_front(&head, ft_lstnew("A"));
	while (head)
	{
		printf("%s -> ", (char *)head->content);
		head = head->next;
	}
	printf("NULL\n");
	
	ft_lstclear(&head, free);
	return (0);
}*/
/***lst - ponteiro para o primeiro elemento da lista
 *new - ponteiro para o novo elemento que sera adicionado a lista

 A funcao ajusta o campo next do novo elemento para apontar para o atual
 elemento da lista.
 Depois o ponteiro do primeiro elemento **lst e apontado para o
 novo elemento, tornando-o o novo elemento da lista.
 Por exemplo, se você tiver uma lista A -> B -> C e
 adicionar D usando ft_lstadd_front, a lista resultante será
 D -> A -> B -> C.
*/