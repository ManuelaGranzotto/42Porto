/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:25:15 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/25 14:44:09 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, (len + 1));
	return (dup);
}
/*#include <stdio.h>

int	main()
{
	const char string[100] = "Quero duplicar essa merda!";
	char *copia = ft_strdup(string);

	if (copia == NULL)
		printf("Erro ao duplicar a string");

	printf("String original: \"%s\"\n", string);
	printf("Cópia da string: \"%s\"\n", copia);
	free(copia);
	return (0);
}*/
