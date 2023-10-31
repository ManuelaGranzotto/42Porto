/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:05:40 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 18:38:59 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	x;

	x = 'F';
	printf("%d\n", ft_isalpha(x));
	printf("%d\n", isalpha(x));
	if (ft_isalpha(x) == 0 && isalpha(x) == 0)
		printf("Not alphabet!!!\n\n");
	else
		printf("It is alphabet!!!\n\n");
}*/