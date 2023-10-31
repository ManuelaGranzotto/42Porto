/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:12:40 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/25 14:43:58 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	if (size == 0)
		return (srcsize);
	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i] != 0 && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}
/*#include <stdio.h>

int	main(void)
{
	const char	src[] = "aaa";
	char	dest[] = "";
	size_t	size;

	size = 2;

	printf("%s\n\n", dest);
	ft_strlcpy(dest, src, size);
	printf("%s\n\n", dest);
	printf("%zu", ft_strlcpy(dest, src, size));
	return (0);
}*/