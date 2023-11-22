/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:05:07 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/31 13:07:20 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_char(int c)
{
	return (write(1, &c, 1));
}

static int	ft_print_ptr_val(unsigned long n, const char *symbols)
{
	int				count;
	unsigned long	base;

	count = 0;
	base = 16;
	if (n < base)
		return (ft_print_char(symbols[n]));
	else
	{
		count = ft_print_ptr_val(n / base, symbols);
		return (count + ft_print_ptr_val(n % base, symbols));
	}
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	n;
	int				count;

	n = (unsigned long)ptr;
	count = 0;
	if (n == 0)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	count += ft_print_ptr_val(n, "0123456789abcdef");
	return (count);
}
