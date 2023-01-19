/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:56:13 by grocamor          #+#    #+#             */
/*   Updated: 2022/12/28 17:50:04 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

int ft_specifier(va_list arg, const char specifier)
{
   	if(specifier == 'c')
		ft_putchar(va_arg(arg, int));
	else if(specifier == 's')
		ft_putstr(va_arg(arg, char *));
	else if(specifier == 'i' || specifier == 'd')
		ft_putnbr(va_arg(arg, unsigned long long));
	else if(specifier == 'x' || specifier == 'X')
		ft_printhex(va_arg(arg, unsigned int), specifier);			
	else if(specifier == 'u')
		ft_print_uns(va_arg(arg, unsigned long long));
	else if(specifier == '%')
		ft_print_module();	
	return (0);
}


int ft_printf(char const *str, ...)
{
	va_list args;
	char *newstr;
	size_t i;
	int printed;

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

