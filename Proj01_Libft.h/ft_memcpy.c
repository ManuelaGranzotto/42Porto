/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:15:29 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/23 22:06:37 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;

	if (!dest && !src)
		return (NULL);
	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	while (n--)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char src[] = "Source";
	unsigned char dest_mine[] = "Destination";
	unsigned char dest_orig[] = "Destination";
	
	printf("O = %s e d = %s e %s\n", src, dest_mine, dest_orig);
	ft_memcpy(dest_mine, src, 6);
	printf("O = %s e d = %s com ft_memcpy\n", src, dest_mine);
	memcpy(dest_orig, src, 6);
	printf("O = %s e d = %s com memcpy\n", src, dest_orig);
	if (strcmp((char *)dest_mine, (char *)dest_orig) == 0)
		printf("Code's alright!!!\n\n");
	else
		printf("KO!!!\n\n");
}*/