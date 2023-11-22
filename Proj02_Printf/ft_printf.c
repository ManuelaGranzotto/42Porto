/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:25:21 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/31 13:06:25 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += ft_print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
/*#include <stdio.h>

int	main()
{
	int	count;
	
	// count = ft_printf("Hello %s\n", "Manu");
	// ft_printf("The chars written are %d\n", count);
	count = ft_printf("%x\n", -1);
	ft_printf("The chars written with ft_printf are %d\n", count);
	count = printf("%x\n", -1);
	printf("The chars written with printf are %d\n", count);

	ft_printf("FT_PRINTF: char = %c\n", 'M');
	ft_printf("FT_PRINTF: string = %s\n", "Hello world! <3");
	ft_printf("FT_PRINTF: pointeiro = %p\n", (void *)0);
	ft_printf("FT_PRINTF: %d inteiro com d = %d\n", 1, -42);
	ft_printf("FT_PRINTF: inteiro com i = %i\n", 42);
	ft_printf("FT_PRINTF: inteiro positivo = %u\n", -42);
	ft_printf("FT_PRINTF: hexa lower = %x\n", -1);
	ft_printf("FT_PRINTF: hexa upper = %X\n", -1);
	ft_printf("FT_PRINTF: e a porcentagem = %%\n\n");
	ft_printf(" NULL %s NULL \n\n", NULL);

	printf("PRINTF: char = %c\n", 'M');
	printf("PRINTF: string = %s\n", "Hello world! <3");
	printf("PRINTF: pointeiro = %p\n", (void *)0);
	printf("PRINTF: inteiro com d = %d\n", -42);
	printf("PRINTF: inteiro com i = %i\n", 42);
	printf("PRINTF: inteiro positivo = %u\n", -42);
	printf("PRINTF: hexa lower = %x\n", 1);
	printf("PRINTF: hexa upper = %X\n", 1);
	printf("PRINTF: e a porcentagem = %%\n\n");
	//printf(" NULL %s NULL ", NULL);
}*/
/*especificadores de formato desejados:
cspdiuxX%*/