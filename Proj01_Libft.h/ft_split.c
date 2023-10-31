/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:03:11 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/23 19:27:01 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_segments(char const *str, char x)
{
	int	count;
	int	seq_flag;

	count = 0;
	seq_flag = 0;
	while (*str)
	{
		if (*str != x && seq_flag == 0)
		{
			count++;
			seq_flag = 1;
		}
		else if (*str == x)
			seq_flag = 0;
		str++;
	}
	return (count);
}

static void	ft_free_code(char **string)
{
	size_t	idx;

	idx = 0;
	while (string[idx])
	{
		free (string[idx]);
		idx++;
	}
	free (string);
}

static char	*ft_alloc_str(const char *st, char sep, const char **next)
{
	const char	*end;
	char		*word;

	end = st;
	while (*end && *end != sep)
		end++;
	word = (char *)malloc(end - st + 1);
	if (!word)
		return (NULL);
	ft_strlcpy (word, st, end - st + 1);
	if (*end == sep)
		*next = end + 1;
	else
		*next = end;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	const char	*nxt;
	int			seg;
	int			i;

	seg = ft_count_segments(s, c);
	split = (char **)malloc(sizeof(char *) * (seg + 1));
	if (!split)
		return (NULL);
	i = 0;
	nxt = s;
	while (i < seg)
	{
		while (*nxt == c)
			nxt++;
		split[i] = ft_alloc_str(nxt, c, &nxt);
		if (!split[i])
		{
			ft_free_code(split);
			return (NULL);
		}
		i++;
	}
	split[seg] = NULL;
	return (split);
}
/*#include <stdio.h>

int	main(void)
{
	const char string[] = "hello world!";
	char x = ' ';
	char **split = ft_split(string, x);
	int	i;

	if (split == NULL)
		printf("Erro ao dividir a string");
	i = 0;
	while (split[i])
	{
		printf("String %d: %s\n", i, split[i]);
		free (split[i]);
		i++;
	}
	printf("resultado: %p\n", split);
	free(split);
	return (0);
}*/
/*retornar 3 ponteiros. As duas strings e o nulo no final

Primeiro eu encontro o char.
Depois eu aloco memória suficiente para todas as strings
(alocação de memória para ponteiros)
Depois eu aloco essa memória para string 1 (split[0])
Depois eu aloco a memória para string 2 (split[1])
Depois aloco o NULL para o ponteiro nulo (split[3])

para calculo do tamanho das strings eu posso fazer s - loc_c
porque posso fazer subtração de 2 ponteiros apontados para
a mesma string. Vai dar quantos char tem nessa string entre 1
e outro. 
s aponta para o começo da string, loc_c para o local que
vai ser separado. Soma 1 para o \0

A cada alocação de string, devo liberar a memória alocada
anteriormente em caso de falha na alocação, para não ficar
memória alocada e ter vazamento de memória.*/
