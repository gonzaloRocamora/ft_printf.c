/*find . -maxdepth 1 -name 'file*.txt' -delete*/
#ifndef LIBPRINT_H
#define LIBPRINT_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_print_hex(unsigned int num, const char format);
static void ft_putchar(char c);
void	ft_putnbr(int nb);
static void	ft_putstr(char const *s);

#endif