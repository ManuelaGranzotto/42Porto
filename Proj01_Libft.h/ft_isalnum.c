/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:59:06 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 18:45:30 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	x;

	x = 'O';
	printf("%d\n", ft_isalnum(x));
	printf("%d\n", isalnum(x));
	if (ft_isalnum(x) == 0 && isalnum(x) == 0)
		printf("Not an alphanumeric!!!\n\n");
	else
		printf("It is an alphanumeric!!!\n\n");
}*/