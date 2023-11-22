/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:00:43 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/31 13:31:10 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_char(int c)
{
	return (write(1, &c, 1));
}

static int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		count += write(1, "(null)", 6);
	else
	{
		while (*str)
		{
			ft_print_char((int)*str);
			count++;
			str++;
		}
	}
	return (count);
}

static int	ft_print_digit(long n, int base, const char *symbols)
{
	int		count;

	if (n < 0)
	{
		ft_print_char('-');
		return (ft_print_digit(-n, base, symbols) + 1);
	}
	else if (n < base)
		return (ft_print_char(symbols[n]));
	else
	{
		count = ft_print_digit(n / base, base, symbols);
		return (count + ft_print_digit(n % base, base, symbols));
	}
}

int	ft_print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_print_ptr(va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_print_digit((long)(va_arg(ap, int)), 10, DECIMAL);
	else if (specifier == 'u')
		count += ft_print_digit((long)(va_arg(ap, unsigned int)),
				10, DECIMAL);
	else if (specifier == 'x')
		count += ft_print_digit((long)(va_arg(ap, unsigned int)),
				16, HEXA_LOW);
	else if (specifier == 'X')
		count += ft_print_digit((long)(va_arg(ap, unsigned int)),
				16, HEXA_UP);
	else
		count += write(1, &specifier, 1);
	return (count);
}
