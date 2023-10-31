/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:53:49 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 20:12:40 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(NULL);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		if (!new_node->content)
		{
			del(new_node);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*#include <stdio.h>

static void	ft_print_list(t_list *list)
{
	while (list)
	{
		printf("%d -> ", *((int *)list->content));
		list = list->next;
	}
	printf("NULL\n");
}
static void	*ft_double_value(void *content)
{
	int	*input;
	int	*output;

	input = (int *)content;
	output = malloc(sizeof(int));
	if (output)
		*output = (*input) * 2;
	return (output);
}
int	main()
{
	t_list	*orig = NULL;
	t_list	*mapped = NULL;
	t_list	*node;
	int	*cont_no1 = (int *)malloc(sizeof(int)); //aloco 
	//memoria para o conteúdo do nó (inteiro)
	int	*cont_no2 = (int *)malloc(sizeof(int));
	int	*cont_no3 = (int *)malloc(sizeof(int));

	*cont_no1 = 3; //ponteiro para o espaço de memória onde 3 ta armazenado.
	*cont_no2 = 4;
	*cont_no3 = 5;
	node = ft_lstnew(cont_no1); //cria o nó da lista para armazenar esse valor.
	//Aloca memória para o nó, mas não para o conteúdo, que ja foi alocado.
	
	ft_lstadd_back(&orig, node); //adiciona esse nó no final da lista.
	ft_lstadd_back(&orig, ft_lstnew(cont_no2)); //É a mesma coisa que o nó 1,
	//só juntei no mesmo processo
	ft_lstadd_back(&orig, ft_lstnew(cont_no3));
	ft_print_list(orig);
	mapped = ft_lstmap(orig, ft_double_value, free);
	//Imprimir a nova lista para ver se foi alterado
	ft_print_list(mapped);
	ft_lstclear(&orig, free);
	ft_lstclear(&mapped, free); //usa ft_lstclear para liberar a memória 
	return (0);
}*/