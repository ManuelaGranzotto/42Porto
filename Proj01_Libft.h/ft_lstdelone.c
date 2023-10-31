/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:05:59 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 11:24:31 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
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
	//Mover o ponteiro para o ultimo nó da lista
	tmp = node;
	tmp = ft_lstlast(tmp);
	//Verificar se há mais de um nó na lista e linkar os
	//nós antes e depois do nó deletado
	if (node != tmp) //agora node é o primeiro e tmp é o último.
	{
		t_list	*penultimo_no = node;
		while (penultimo_no->next != tmp) //encontrar o penúltimo nó
			penultimo_no = penultimo_no->next;
		penultimo_no->next = NULL; //define o ponteiro
		//next do penúltimo para NULL
		ft_lstdelone(tmp, free); //deleta o último nó
	}
	//deletar o último node se for o único nó da lista
	else
	{
		ft_lstdelone(tmp, free);
		node = NULL;
	}
	//Imprimir novamente a lista para ver se foi deletado
	tmp = node;
	ft_print_list(tmp);
		return (0);
}*/