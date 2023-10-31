/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:15:58 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 11:24:38 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	if (!*lst || !*del)
		return ;
	current_node = *lst;
	while (current_node)
	{
		next_node = current_node->next;
		del (current_node->content);
		free (current_node);
		current_node = next_node;
	}
	*lst = NULL;
}
/*#include <stdio.h>

static void	ft_print_list(t_list *list)
{
	while (list)
	{
		printf("%s -> ", (char *)list->content);
		list = list->next;
	}
	printf("NULL\n");
}
int	main()
{
	t_list	*node;
	t_list	*tmp;

	node = ft_lstnew(ft_strdup("A"));//usa strdup para conseguir liberar com free
	printf("%s\n\n", (char *)node->content);
	ft_lstadd_back(&node, ft_lstnew(ft_strdup("B")));
	ft_lstadd_back(&node, ft_lstnew(ft_strdup("C")));
	//imprimir a lista inicial
	tmp = node;
	ft_print_list(tmp);
	ft_lstclear(&node, free);
	//Imprimir novamente a lista para ver se foi deletado
	tmp = node;
	ft_print_list(tmp);
		return (0);
}*/