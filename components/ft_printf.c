/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:56:13 by grocamor          #+#    #+#             */
/*   Updated: 2023/01/23 20:34:57 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_uns(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_print_module();
	return (print_length);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	char	*newstr;
	size_t	i;
	int		printed;

	i = 0;
	printed = 0;
	newstr = (char *)str;
	va_start(args, str);
	while (newstr[i])
	{
		if (newstr[i] == '%')
		{
			i++;
			printed += ft_specifier(args, newstr[i]);
			i++;
		}
		else
		{
			printed += ft_putchar(newstr[i]);
			i++;
		}
	}
	va_end(args);
	return (printed);
}
