/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:20:01 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/20 19:01:56 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	s[] = "cinco";

	printf("%ld\n", ft_strlen(s));
	printf("%ld\n", strlen(s));
	if (ft_strlen(s) == strlen(s))
		printf("Code's alright!!!\n\n");
	else
		printf("KO!!!\n\n");
}*/