/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:43:43 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 15:56:37 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*#include <stdio.h>

int	main()
{
	t_list	*head;
	t_list	*temp;

	head = ft_lstnew(ft_strdup("elemento 3"));
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("elemento 2")));
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("elemento 1")));
	temp = head;
	while (temp)
	{
		printf("%s -> ", (char *)temp->content);
		temp = temp->next;
	}
	printf("NULL\n\n");
	printf("Tamanho da lista: %d\n", ft_lstsize(head));
	ft_lstclear(&head, free);
	return (0);
}*/