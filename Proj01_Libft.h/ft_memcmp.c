/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:05:04 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/21 20:30:20 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;

	ptr_src = (unsigned char *)s1;
	ptr_dst = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr_src != *ptr_dst)
			return (*ptr_src - *ptr_dst);
		ptr_src++;
		ptr_dst++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	s1a[] = "testss";
	const char	s2a[] = "test"; //destino da minha funcao
	size_t	size;

	size = 5;
	printf("original = %d \n", ft_memcmp(s1a, s2a, size));
	printf("minha = %d", ft_memcmp(s1a, s2a, size));
	return (0);
}*/

/*
ptr_src = o ponteiro
*ptr_src = valor a que o ponteiro ta apontado*/