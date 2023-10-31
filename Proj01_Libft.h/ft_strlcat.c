/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:47:49 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/21 18:33:41 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	copy_len;
	size_t	cpy_index;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	cpy_index = 0;
	if (size <= dst_len)
		return (src_len + size);
	if (src_len >= size - dst_len)
		copy_len = size - dst_len -1;
	else
		copy_len = src_len;
	while (cpy_index < copy_len)
	{
		dst[dst_len + cpy_index] = src[cpy_index];
		cpy_index++;
	}
	dst[dst_len + copy_len] = '\0';
	return (dst_len + src_len);
}
/*#include <stdio.h>

int	main(void)
{
	char	src1[] = "origem";
	char	dest1[] = "destino";
	unsigned int	size;
	int	temp;

	size = 13;

	temp = ft_strlcat(dest1, src1, size);
	printf("%d\n", temp);
	printf("%s", dest1);
	return (0);
}*/