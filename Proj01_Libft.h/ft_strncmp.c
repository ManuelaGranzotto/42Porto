/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:00:34 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/21 19:53:16 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	i1;
	char	s1a[] = "abddef";
	char	s2a[] = "abcdef"; //destino da minha funcao
	char	s3a[] = "abcdef"; //destino da funcao original de c
	int	result;
	int	result_ft;
	
	i1 = 2;

	result = strncmp(s1a, s3a, i1);
	result_ft = ft_strncmp(s1a, s2a, i1);
	printf("original = %d \n", result);
	printf("minha = %d", result_ft);
	return (0);
}*/