# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 16:03:08 by rgelin            #+#    #+#              #
#    Updated: 2022/05/18 16:05:11 by rgelin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex00

#-------------------COMPILATION----------------------

CC			=	g++
FLAGS		=	-Wall -Werror -Wextra -std=c++98

#-------------------SOURCES FILES----------------------

SRC		=	./src/

SRCS		=	main.cpp \
				Bureaucrat.cpp
				

#-------------------OBJECTS----------------------

OBJS		=	$(SRCS:.cpp=.o)

#-------------------COLORS----------------------

RED			=	\x1b[31m

YELLOW		=	\x1b[33m

GREEN		=	\x1b[32m

NO_COLOR	=	\x1b[0m


#-------------------RULES-----------------------
%.o: %.cpp
		@printf "$(YELLOW)Generating ex00 objects... %-33.33s\r$(NO_COLOR)" $@
		@$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			@echo "\n"
			@echo "$(GREEN)Compiling ex00...$(NO_COLOR)"
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
			@echo "\nEnjoy!"

all:	$(NAME)

clean:
		@echo "$(RED)Deleting objects...\n$(NO_COLOR)"
		@rm -f $(OBJS)

fclean:	clean
		@echo "$(RED)Deleting executables...\n$(NO_COLOR)"
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re