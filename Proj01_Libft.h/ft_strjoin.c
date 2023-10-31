/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:59:34 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/23 14:30:52 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*cat;

	len = ft_strlen(s1) + ft_strlen(s2);
	cat = (char *)malloc(sizeof(char) * len + 1);
	if (!cat)
		return (NULL);
	ft_strlcpy(cat, s1, ft_strlen(s1) + 1);
	ft_strlcat(cat, s2, len + 1);
	return (cat);
}
/*#include <stdio.h>

int	main()
{
	const char string1[] = "Concatenar essa string...";
	const char string2[] = "Com essa aqui!";
	char *copia = ft_strjoin(string1, string2);

	if (copia == NULL)
		printf("Erro ao duplicar a string");

	printf("Strings original: %s e %s\n", string1, string2);
	printf("Substring: \"%s\"\n", copia);
	free(copia);
	return (0);
}*/