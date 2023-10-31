/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:39:08 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 20:03:09 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[8] = "Testando";
	char	t[8] = "Testando";

	printf("Before ft_bzero %s\n", s);
	ft_bzero(s, 3);
	printf("After ft_bzero: %s\n", s);
	bzero(t, 3);
	printf("After bzero: %s\n", s);
	if (ft_memcmp(s, t, 8) == 0)
		printf("Code's alright!!!\n\n");
	else
		printf("KO!!!\n\n");
	return (0);
}*/