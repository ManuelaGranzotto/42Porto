/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:53:42 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/21 19:27:13 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;
	unsigned char	*str;

	uc = (unsigned char)c;
	str = (unsigned char *) s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == uc)
			return ((char *) &str[i]);
		i--;
	}
	if (uc == 0)
		return ((char *) &str[i]);
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str[] = "abbbbbb";
	int	x = 'a';

	printf("minha %s\n", ft_strrchr(str, x));
	printf("original %s\n", strrchr(str, x));
	printf("minha %p\n", ft_strrchr(str, x));
	printf("original %p\n", strrchr(str, x));
	return (0);
}*/