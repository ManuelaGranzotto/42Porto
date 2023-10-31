/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:27:18 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/22 15:48:28 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(nmemb * size);
	if (mem)
		ft_memset(mem, 0, (nmemb * size));
	return (mem);
}
/*#include <stdio.h>
int	main()
{
	int *array = ft_calloc(10, sizeof(int));
	int *bigArray = ft_calloc((size_t)-1, sizeof(int));
	int	i;

	printf("%d\n\n", *array);
	if (!array)
	{
		printf("Erro na alocação!\n\n");
		return (1);
	}
	i = 0;
	while (i < 10)
	{
		if (array[i] != 0)
		{
			printf("A memoria nao foi inicializada com zeros\n\n");
			return (1);
		}
		i++;
	}
	printf("Alocação de memoria e inicialização bem sucedidas\n");
	free (array);
	if (!bigArray)
		printf("Falha na alocação detectada corretamente\n");
	else
	{
		printf("Alocação inesperada\n");
		free (bigArray);
		return (1);
	}
	return (0);
}*/