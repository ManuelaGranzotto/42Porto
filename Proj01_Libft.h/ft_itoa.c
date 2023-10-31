/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:41:05 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/23 20:39:45 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countnbr(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i = 1;
	}
	if (nb == 0)
		i = 1;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*ft_allocate_str(int nbr)
{
	int		idx;
	char	*number;

	idx = ft_countnbr(nbr);
	number = (char *)malloc(sizeof(char) * (idx + 1));
	if (!number)
		return (NULL);
	number[idx] = '\0';
	return (number);
}

static void	ft_fill_str(char *num, int nu)
{
	int	index;

	index = ft_countnbr(nu) - 1;
	if (nu < 0)
	{
		nu = -nu;
		num[0] = '-';
	}
	if (nu == 0)
	{
		num[0] = '0';
		num[1] = '\0';
	}
	while (nu > 0)
	{
		num[index] = nu % 10 + '0';
		nu = nu / 10;
		index--;
	}
}

char	*ft_itoa(int n)
{
	char	*nmr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nmr = ft_allocate_str(n);
	if (!nmr)
		return (NULL);
	ft_fill_str(nmr, n);
	return (nmr);
}
/*Converte um numero inteiro para uma string.
#include <stdio.h>

int	main(void)
{
	int	numb;
	char	*res;
	
	numb = 2147483648;
	res = ft_itoa(numb);
	printf("%d\n\n", numb);
	printf("%s\n", res);
	free (res);
	return (0);
}*/