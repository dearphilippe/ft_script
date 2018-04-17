# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: passef <passef@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/23 22:58:59 by passef            #+#    #+#              #
#    Updated: 2018/04/17 15:34:47 by passef           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft/libft.a
EXEC =		ft_script

SRC =		libft/ft_putstr.c \
			libft/ft_atoi.c \
			libft/ft_puterror.c \
			libft/ft_bzero.c \
			libft/ft_swap.c \
			libft/ft_strlen.c \
			libft/ft_strcmp.c \
			libft/ft_strcpy.c \
			libft/ft_memalloc.c \
			libft/ft_memdel.c \
			libft/ft_putstr.c \
			libft/ft_putstr_fd.c \
			libft/ft_putchar_fd.c \

OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror -g
FLAGINC = -I inc/
RM = rm -rf
LFT = -C libft/
GREEN = \033[92m
PURPLE = \033[095m
NORM = \033[0m
ERASE = \033[K
CURSORUP = \033[1A

all: $(NAME)
$(NAME): $(OBJ)
	@echo "$(ERASE)$(PURPLE)[ft_script] :$(NORM) $(GREEN)Creating Library$(NORM) $(CURSORUP)";
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@$(CC) $(FLAGS) main.c $(NAME) $(FLAGINC) -o $(EXEC)
	@echo "$(ERASE)$(PURPLE)[ft_script] :$(NORM) $(GREEN)ft_script Compiled!$(NORM)";
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(ERASE)$(PURPLE)[ft_script] :$(NORM) $(GREEN)Compiling $<$(NORM) $(CURSORUP)";
clean:
	@$(RM) $(OBJ)
	@cd libft && make clean
	@echo "$(ERASE)$(PURPLE)[ft_script] :$(NORM) $(GREEN)Cleaning Object files $(NORM)";
fclean: clean
	@$(RM) $(NAME)
	@echo "$(ERASE)$(PURPLE)[ft_script] :$(NORM) $(GREEN)Cleaning ft_script $(NORM)";
re: fclean all