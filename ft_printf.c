
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
#include <stdlib.h>

void	ft_putstr(char const *s)
{
	int		i;

	i = 0;
		while (s[i])
			write(1, &s[i++], 1);
}

static void ft_putchar(char c)
{
	write(1, &c, 1);	
} 

static void	ft_putnbr(int nb) {
	if (nb < 0) {
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10) {
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) ft_putchar(nb + 48);
}

int ft_printf(char const *str, ...)
{
	int i;
	char *new_str;
	//initialize va_list to vl
	va_list vl;
	//cast const str to 
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
				if(new_str[i] == 'd')
				{
					ft_putnbr(va_arg(vl, int));
					i++;
				}
				if(new_str[i] == 's')
				{
					ft_putstr(va_arg(vl, char*));
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
	char *s = "this a test to return a:  %s";
	char *t = "POSITIVO";
	ft_printf(s, t);
	return (0);
}
