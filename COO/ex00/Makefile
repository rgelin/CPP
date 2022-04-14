# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 16:11:09 by rgelin            #+#    #+#              #
#    Updated: 2022/04/14 16:15:23 by rgelin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

#-------------------COMPILATION----------------------

CC			=	g++
FLAGS		=	-Wall -Werror -Wextra

#-------------------SOURCES FILES----------------------

SRCS		=	megaphone.cpp

#-------------------OBJECTS----------------------

OBJS		=	$(SRCS:.c=.o)

#-------------------COLORS----------------------

RED			=	\x1b[31m

YELLOW		=	\x1b[33m

GREEN		=	\x1b[32m

NO_COLOR	=	\x1b[0m


#-------------------RULES-----------------------
%.o: %.c
		@printf "$(YELLOW)Generating cub3d objects... %-33.33s\r$(NO_COLOR)" $@
		@$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(OBJS_UTILS)
			@echo "\n"
			@echo "$(GREEN)\nCompiling megaphone...$(NO_COLOR)"
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
			@echo "\nEnjoy!"

all:	$(NAME)

clean:
		@echo "$(RED)Deleting objects...\n$(NO_COLOR)"
		@rm -f $(OBJS) $(OBJS_UTILS)

fclean:	clean
		@echo "$(RED)Deleting executables...\n$(NO_COLOR)"
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re
