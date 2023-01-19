/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_module.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:56:13 by grocamor          #+#    #+#             */
/*   Updated: 2022/12/28 17:50:04 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINT_H
#define LIBPRINT_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int		ft_print_hex(unsigned int num, const char format);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char const *s);
int		ft_print_module(void);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_unsigned(unsigned int n);
int		ft_ptr_len(unsigned long long num);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);
int		ft_printf(char const *str, ...);

#endif