/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:56:38 by mfranke-          #+#    #+#             */
/*   Updated: 2023/10/31 13:31:20 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

# define DECIMAL	"0123456789"
# define HEXA_LOW	"0123456789abcdef"
# define HEXA_UP	"0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_print_format(char specifier, va_list ap);
int	ft_print_ptr(void *ptr);

#endif