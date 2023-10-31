/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:14:55 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 18:48:09 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	x;

	x = 'M';
	printf("%d\n", ft_isprint(x));
	printf("%d\n", isprint(x));
	if (ft_isprint(x) == 0 && isprint(x) == 0)
		printf("Not printable!!!\n\n");
	else
		printf("It is printable!!!\n\n");
}*/