/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:24:35 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 18:44:06 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	x;

	x = '3';
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", isdigit(x));
	if (ft_isdigit(x) == 0 && isdigit(x) == 0)
		printf("Not a digit!!!\n\n");
	else
		printf("It is a digit!!!\n\n");
}*/