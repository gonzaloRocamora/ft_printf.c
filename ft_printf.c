/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
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



*/
//tengo que checkiar que seann las letras del print que no sean otras ni numeros
//necesito la letra encontrada 
char	ft_find(char *str)
{
	while(*str != '%')
	{
		str++;
		if(*str == '%')
		{
			//if !isalpha or
			str++;
			return (*str);
		}
	
	}
	return (0);
}
int main(void)
{
	char *str = "hola como %c estas";
	char total = ft_find(str);
	printf("La letra es: %c" , total);
	return (0);
}