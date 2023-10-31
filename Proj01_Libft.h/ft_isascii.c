/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:09:40 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 18:46:55 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	x;

	x = '\n';
	printf("%d\n", ft_isascii(x));
	printf("%d\n", isascii(x));
	if (ft_isascii(x) == 0 && isascii(x) == 0)
		printf("Not ASCII!!!\n\n");
	else
		printf("It is ASCII!!!\n\n");
}*/