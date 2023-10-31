/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:56:01 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/25 14:44:41 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*#include <stdio.h>

int	main()
{
	const char string1[] = "!!xxxx  xxx???";
	const char corte2[] = "!?";
	char *cor = ft_strtrim(string1, corte2);

	if (cor == NULL)
		printf("Erro ao duplicar a string");

	printf("Strings original: %s e %s\n", string1, corte2);
	printf("trimmed: \"%s\"\n", cor);
	free(cor);
	return (0);
}*/