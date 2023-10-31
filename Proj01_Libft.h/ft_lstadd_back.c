/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:20:32 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 16:46:44 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	tmp = ft_lstlast(tmp);
	tmp->next = new;
}
/*#include <stdio.h>

int	main()
{
	t_list	*node;

	node = ft_lstnew("A");
	ft_lstadd_back(&node, ft_lstnew("B"));
	ft_lstadd_back(&node, ft_lstnew("C"));
	while (node)
	{
		printf("%s -> ", (char *)node->content);
		node = node->next;
	}
	printf("NULL\n");
	ft_lstclear(&node, free);
	return (0);
}*/