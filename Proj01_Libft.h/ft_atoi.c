/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:04:22 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/23 14:05:35 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	numeros;

	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			sign = -1;
		i++;
	}
	numeros = 0;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		numeros = numeros * 10 + (nptr[i] - 48);
		i++;
	}
	return (sign * numeros);
}
/*#include <stdio.h>

int	main(void)
{
	const char	string[] = "+546:5";
	 
	printf("minha = %d\n", ft_atoi(string));
	printf("original = %d\n", atoi(string));
	return (0);
}*/