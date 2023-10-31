/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:25:03 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/21 20:14:43 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	p = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str[] = "bonjour";
	int	x = 'b';
	size_t	size = 4;

	printf("minha %p\n", ft_memchr(str, x, size));
	printf("original %p\n", memchr(str, x, size));
	return (0);
}*/

/*The  memchr() and memrchr() functions return a pointer 
to the matching byte or NULL if the character does not 
occur in the given memory area.

int c: O valor do caractere a ser procurado. É um int, 
mas a busca de fato considera apenas o byte de menor ordem 
(os 8 bits inferiores) deste int, tornando-o 
efetivamente um unsigned char.

Se o caractere c for encontrado dentro dos primeiros n 
bytes de str, a função retorna um ponteiro para a primeira 
ocorrência desse caractere.
Se o caractere c não for encontrado, ela retorna um 
ponteiro NULL.*/