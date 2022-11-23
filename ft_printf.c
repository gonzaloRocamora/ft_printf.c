/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:09:26 by grocamor          #+#    #+#             */
/*   Updated: 2022/08/26 12:52:27 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <libprint.h>


int ft_specifier(va_list arg, const char specifier)
{
    //int output;

    if(specifier == 'c')
        ft_putchar(va_arg(arg, int));
		
    else if(specifier == 's')
		ft_putstr(va_arg(arg, char *));
	else if(specifier == 'i' || specifier == 'd')
		ft_putnbr(va_arg(arg, unsigned long long));
	else if(specifier == 'x' || specifier == 'X')
		ft_printhex(va_arg(arg, unsigned int), specifier);			
	return (0);
}


int ft_printf(char const *str, ...)
{
	va_list vl;
	char *newstr;
	size_t i;

	i = 0;
	newstr = (char *)str;
	va_start(vl, str);
	while (newstr[i])
	{

		if (newstr[i] == '%')
		{
			i++;
			ft_specifier(vl, newstr[i]);
			i++;
		}
		else
		{
			ft_putchar(newstr[i]);
			i++;
		}
	}

	return (0);
}

int main(void){
    unsigned int b = 0xFAFA;
    char x = 'x';
    ft_printf(b, x);
    return (0);
}
/*

Character escape sequences are in backslash
	 notation as defined in the ANSI X3.159-1989
	 (``ANSI C89''), with extensions.  The charac-
	 ters and their meanings are as follows:
		   \a      Write a <bell> character.
		   \b      Write a <backspace> character.
		   \c      Ignore remaining characters in
				   this string.
		   \f      Write a <form-feed> character.
		   \n      Write a <new-line> character.
		   \r      Write a <carriage return> char-
				   acter.
		   \t      Write a <tab> character.
		   \v      Write a <vertical tab> charac-
				   ter.
		   \'      Write a <single quote> charac-
				   ter.
		   \\      Write a backslash character.
		   \num    Write a byte whose value is the
				   1-, 2-, or 3-digit octal number
				   num.  Multibyte characters can
				   be constructed using multiple
				   \num sequences.
int	putchar(int c)
{
	write(1, &c, 1);
	return (0);
}
size_t	ft_strlen(char const *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}




	//va_list args;
	//va_start(args, str);
	int i;
	//int j;
	//char *new_str;

	i = 0;
	//j = 0;
	while (str[i] != '%' && str)
	{
		i++;
		//mientras str[i] es distinto a % voy iterando(putchar)
		//compare the letter found after the module sign. To choose the type of variable
		if(str[i] == '%')
		{
			i++;

			return (str[i]);
		}

	}
	return (0);
*/
// tengo que checkiar que seann las letras del print que no sean otras ni numeros
// necesito la letra encontrada