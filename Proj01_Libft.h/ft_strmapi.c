/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:23:59 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/23 21:01:57 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	int				len;
	unsigned int	i;
	char			c;

	len = ft_strlen(s);
	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		c = s[i];
		str[i] = f(i, c);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>

char toupper_with_index(unsigned int i, char c)
{
// Simples exemplo: transformar em maiúsculo apenas os
//caracteres de índice ímpar.
	if (i % 2 != 0)
	{
		if (c >= 'a' && c <= 'z')
			return c - 'a' + 'A';
	}
	return c;
}
int main()
{
	char const *original = "manuela granzotto";
	char *transformed = ft_strmapi(original, toupper_with_index);
	
	if (transformed)
	{
		printf("Transformed: %s\n", transformed);
		free(transformed);
	}
	return (0);
}*/