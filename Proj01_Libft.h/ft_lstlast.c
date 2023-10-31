/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:21:51 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 16:47:01 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*#include <stdio.h>

int	main()
{
	t_list	*head = NULL;
	t_list	*temp = NULL;

	head = ft_lstnew(ft_strdup("3"));
	printf("%s\n\n", (char *)head->content);
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("2")));
	printf("%s\n\n", (char *)head->content);
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("1")));
	printf("%s\n\n", (char *)head->content);
	temp = head;
	while (temp)
	{
		printf("%s -> ", (char *)temp->content);
		temp = temp->next;
	}
	printf("NULL\n\n");
	printf("Ultimo elemento: %s\n", (char *)ft_lstlast(head)->content);
	ft_lstclear(&head, free);
	return (0);
}*/