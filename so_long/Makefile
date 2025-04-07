# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/07 17:29:58 by guvascon          #+#    #+#              #
#    Updated: 2025/04/07 17:34:52 by guvascon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 
		
OBJS = $(SRCS:.c=.o)

CC = @cc
CFLAGS = -g -Wall -Wextra -Werror
RM = rm -f

PRINTF_PATH = ./ft_printf
PRINTF = $(PRINTF_PATH)/libftprintf.a

NAME = so_long

all : $(NAME) 
$(NAME) : $(OBJS) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $(NAME)

$(LIBFT):
	@echo " [ .. ] | Compiling.."
	@make -s -C $(PRINTF)
	@echo " [ OK ] | Ready!"

clean:
	@$(RM) $(OBJS) 
	@$(RM) $(PRINTF_PATH)/*.o
	@echo "all objects were removed"
	
fclean: clean
	@$(RM) $(NAME) 
	@make -s fclean -C $(PRINTF_PATH)
	clear
	@echo "all files were removed"

re: fclean $(NAME)
	clear
	@echo "bla bla bla"
	
.PHONY: all clean fclean re bonus