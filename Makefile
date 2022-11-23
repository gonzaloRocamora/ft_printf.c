/*                                                        :::      ::::::::   */
/*   MAKEFILE                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:09:26 by grocamor          #+#    #+#             */
/*   Updated: 2022/08/26 12:52:27 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#vars

NAME	= libprint.a

SRCS_DIR = components/

SRCS =	ft_printhex.c/
		ft_putchar.c/
		ft_putstr.c/
		ft_specifier.c/

COMPILE = gcc

FLAGS = -Wall -Wextra -Werror 

DEL = rm -rf

OBJ = 