/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_memchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/11 12:38:23 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void	ft_putnbr_fd(int n, int fd)
{
	long	newint;

	newint = (long)n;
	if (newint < 0)
	{
		ft_putchar_fd('-', fd);
		newint = newint * -1;
	}	
	if (newint >= 9)
	{
		ft_putnbr_fd(newint / 10, fd);
		ft_putchar_fd((newint % 10) + 48, fd);
	}
	ft_putchar_fd((newint % 10) + '0', fd);
}
