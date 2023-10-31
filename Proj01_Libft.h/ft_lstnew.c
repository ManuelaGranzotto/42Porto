/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:06:42 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 16:46:33 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*#include <stdio.h>

int	main()
{
	int	valor = 42;
	t_list *novo_no = ft_lstnew(&valor);

	if (novo_no != NULL)
	{
		printf("Conteudo do novo no: %d\n", *(int*)novo_no->content);
		printf("Next do novo no: %p\n", (void*)novo_no->next);
	}
	else
		printf("Falha ao alocar o novo no\n");
	free (novo_no);
	return (0);
}*/