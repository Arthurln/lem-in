# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arlaine <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/17 13:40:17 by arlaine           #+#    #+#              #
#    Updated: 2019/04/18 16:13:22 by arlaine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

COMP = gcc -Wall -Wextra -Werror

P_OBJ = obj/
P_SRCS = srcs/*.c
P_LIBFT = srcs/libft/
LIB_NAME = libft.a

INCLUDE = includes/lem_in.h
LIBFT_INCLUDE = srcs/libft/libft.h

LIBFT_OBJS = $(addprefix $(P_LIBFT), $(.c=.o))

all: lib $(NAME)

.SILENT:
$(NAME):
	@mkdir obj
	@echo '🤖'"\033[36m  Obj Folder created \033[0m"'🤖'
	@$(COMP) $(P_SRCS) -I $(INCLUDE) $(addprefix $(P_LIBFT), $(LIB_NAME)) \
	-o $(NAME)
	@echo '😎'"\033[33m  Compilation success \033[0m"'😎'

lib: 
	@make -C $(P_LIBFT)
	@echo '🤖'"\033[36m  Lib compiled \033[0m"'🤖'

clean:
	@make clean -C $(P_LIBFT)
	@rm -rf $(P_OBJ)
	@echo '🐉'"\033[32m  Libft/srcs/*.o && obj/*.o cleaned \033[0m"'🐉'

fclean: clean
	@rm -f $(NAME)
	@echo '🐉'"\033[32m  Clean done + ./lem-in deleted \033[0m"'🐉'

re: fclean all

.PHONY : all clean fclean
