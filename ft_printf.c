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

char ft_putchar(char c)
{
	if(write(1, &c, 1))
		return(0);
	else
		return (1);
} 

int ft_printf(char const *str, ...)
{
	int i;
	char *new_str;
	va_list vl;

	new_str = (char *)str;
	i = 0;
	va_start(vl, str);
	while(new_str[i])
		{
			
			if(new_str[i] == '%')
			{
				i++;
				if(new_str[i] == 'c')
					{
						ft_putchar(va_arg(vl, int));
						i++;
					}
			}
			else
				{
					ft_putchar(new_str[i]);
					i++;
				}
		}
		return (0);
}


int main(void)
{
	char *s = "this a test to return a character: %c";
	char t = 'T';
	ft_printf(s, t);
	return (0);
}