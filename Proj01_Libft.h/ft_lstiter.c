/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:49:47 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/25 14:41:48 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*#include <stdio.h>

static void	ft_up_tolower(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}
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

	node = ft_lstnew(ft_strdup("ELEMENTO 1"));//usa strdup
	//para conseguir liberar com free
	printf("%s\n\n", (char *)node->content);
	ft_lstadd_back(&node, ft_lstnew(ft_strdup("ELEMENTO 2")));
	ft_lstadd_back(&node, ft_lstnew(ft_strdup("ELEMENTO 3")));
	//imprimir a lista inicial
	tmp = node;
	ft_print_list(tmp);
	ft_lstiter(node, ft_up_tolower);
	//Imprimir novamente a lista para ver se foi alterado
	tmp = node;
	ft_print_list(tmp);
	return (0);
}*/
