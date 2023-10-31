/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:16:32 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/21 19:19:06 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;
	unsigned char	*str;

	uc = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == uc)
			return ((char *) &str[i]);
		i++;
	}
	if (uc == 0)
		return ((char *) &str[i]);
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str[] = "teste";
	int	x = 's';
	size_t	size = 2;

	printf("minha %s\n", ft_strchr(str, x));
	printf("original %s\n", strchr(str, x));
	printf("minha %p\n", ft_strchr(str, x));
	printf("original %p\n", strchr(str, x));
	return (0);
}*/