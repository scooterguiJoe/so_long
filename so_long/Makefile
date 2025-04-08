# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/07 17:29:58 by guvascon          #+#    #+#              #
#    Updated: 2025/04/08 17:18:03 by guvascon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/test.c
		
OBJS = $(SRCS:.c=.o)

CC = @cc
CFLAGS = -g -Wall -Wextra -Werror
RM = rm -f

# PRINTF_PATH = ./ft_printf
# PRINTF = $(PRINTF_PATH)/libftprintf.a

NAME = so_long

MLX_DIR = minilibx-linux

MLX = $(MLX_DIR)/libmlx.a 

MLXFLAGS = -lXext -lX11

all : $(NAME) 
$(NAME) : $(OBJS) $(PRINTF) $(MLX)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) $(MLX) $(MLXFLAGS) -o $(NAME)

$(MLX):
	@make -s -C ./minilibx-linux
	
$(PRINTF):
	@echo " [ .. ] | Compiling.."
	@make -s -C $(PRINTF)
	@echo " [ OK ] | Ready!"

clean:
	@$(RM) $(OBJS) 
	@$(RM) $(PRINTF_PATH)/*.o
	@echo "all objects were removed"
	
fclean: clean
	@$(RM) $(NAME) 
	clear
	@echo "all files were removed"

re: fclean $(NAME)
	clear
	@echo "bla bla bla"
	
.PHONY: all clean fclean re bonus
