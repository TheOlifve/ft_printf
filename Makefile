# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaryan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 10:16:43 by amaryan           #+#    #+#              #
#    Updated: 2023/02/06 19:43:02 by hrahovha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

CFUNC = ft_printf.c			\
		ft_p_hex.c			\
		ft_p_int.c			\
		ft_p_ptr.c			\
		ft_p_string.c		\
		ft_type.c			\

OBJ = $(CFUNC:.c=.o)

$(NAME): $(OBJ)
	@$(MAKE) all -C ./libft
	@cp ./libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)

all : $(NAME)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(OBJ)

re: fclean all

.PHONY: all clean fclean re
