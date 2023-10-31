/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:30:14 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/25 14:44:50 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if (s[start])
		ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
/*#include <stdio.h>

int	main()
{
	const char string[] = "Criar uma substring!";
	char *copia = ft_substr(string, 3, 6);

	if (copia == NULL)
		printf("Erro ao duplicar a string");

	printf("String original: \"%s\"\n", string);
	printf("Substring: \"%s\"\n", copia);
	free(copia);
	return (0);
}*/