
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grocamor <grocamor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 11:27:22 by grocamor          #+#    #+#              #
#    Updated: 2022/08/24 11:30:25 by grocamor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libprint.a
INCLUDE	= include
LIBFT	= libft
SRC_DIR	= components/
OBJ_DIR = obj/
FLAGS = -Wall -Wextra -Werror 
DEL = rm -rf
AR	= ar rcs

SRC_FILES	=	ft_print_module ft_print_ptr ft_print_uns ft_printhex ft_putchar ft_putnbr ft_putstr

SRC	=	$(addprefix $(SRC_DIR),$(addsufix .c, $(SRC_FILES)))
OBJ	=	$(addprefix $(OBJ_DIR), $(addsufix .o, $(SRC_FILES)))

OBJF	=	.cache_exists

all: $(NAME)

#target	#prerequisite
$(NAME):	$(OBJ)
					@make -C $(LIBFT)
					@cp libft/libft.a .
					@mv libft.a $(NAME)
					@$(AR) $(NAME) $(OBJ)
					@echo "ft_printf compilado!"

$(OBJ_DIR)%.o: $(SRC_DIR).c | $(OBJF)
						@echo "COMPILING: $<"
						@gcc $(FLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)

clean: 
		@$(DEL) $(NAME)
		@make clean -C $(LIBFT)
		@echo "ft_printf objects files eliminados"

fclean: clean
			@$(RM) $(NAME)
			@$(RM) $(LIBFT)/libft.a
			@echo "ft_printf ejecutable eleminado!"
			@echo "libft ejecutable eliminado!"

re:			fclean all

.PHONY:		all clean fclean re norm