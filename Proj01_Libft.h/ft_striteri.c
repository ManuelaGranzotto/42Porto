/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:20:42 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/23 21:25:58 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>

void toupper_with_index(unsigned int i, char *c)
{
// Simples exemplo: transformar em maiúsculo apenas os
//caracteres de índice ímpar.
	if (i % 2 == 1)
		*c = ft_toupper(*c);
}

int main()
{
	char	str[] = "manuela franke granzotto";
	
	printf("Original: %s\n", str);
	ft_striteri(str, toupper_with_index);
	printf("Transformed: %s\n", str);
	return (0);
}*/