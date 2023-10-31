/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:13:04 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/21 21:07:53 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (*little == '\0')
		return ((char *)big);
	b = 0;
	while (big[b] != '\0' && b < len)
	{
		l = 0;
		while (little[l] != '\0' && little[l] == big[b + l] && ((b + l) < len))
		{
			if (little[l + 1] == '\0')
				return ((char *)&big[b]);
			l++;
		}
		b++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	palheiro[] = "Porto Manuela Maria Porto";
	char	agulha[] = "Maria";
	char	*ptr;
	size_t	size = 25;

	ptr = ft_strnstr(palheiro, agulha, size);
	
	printf("endereco = \n%p\n", ptr);
	printf("string = \n%s\n", ptr);
	return (0);
}*/