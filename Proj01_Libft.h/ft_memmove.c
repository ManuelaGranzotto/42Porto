/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:44:27 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/23 22:06:01 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (!dest && !src)
		return (NULL);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if ((ptr_src < ptr_dest) && (ptr_dest < ptr_src + n))
	{
		ptr_src = ptr_src + n - 1;
		ptr_dest = ptr_dest + n - 1;
		while (n--)
		{
			*ptr_dest = *ptr_src;
			ptr_dest--;
			ptr_src--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char src[] = "HELLO";
	unsigned char dest_mine[] = "HELLOWORLD";
	unsigned char dest_orig[] = "HELLOWORLD";
	
	printf("O = %s e d = %s e %s\n", src, dest_mine, dest_orig);
	ft_memmove(dest_mine, src, 8);
	printf("O = %s e d = %s com ft_memmove\n", src, dest_mine);
	memmove(dest_orig, src, 8);
	printf("O = %s e d = %s com memmove \n", src, dest_orig);
	if (strcmp((char *)dest_mine, (char *)dest_orig) == 0)
		printf("Code's alright!!!\n\n");
	else
		printf("KO!!!\n\n");
}*/