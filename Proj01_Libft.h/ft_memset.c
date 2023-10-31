/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:45:10 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 19:47:56 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p++ = (unsigned char)c;
		n--;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[11] = "Testando";

	printf("Before memset %s\n", s);
	ft_memset(s + 8, '!', 3);
	printf("My memset: %s\n", s);
	memset(s + 8, '!', 3);
	printf("Original: %s\n", s);
	if (ft_memset(s + 8, '!', 3) == memset(s + 8, '!', 3))
		printf("Code's alright!!!\n\n");
	else
		printf("KO!!!\n\n");
}*/