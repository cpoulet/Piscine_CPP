# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 09:25:15 by cpoulet           #+#    #+#              #
#    Updated: 2018/01/09 15:21:03 by cpoulet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	main
FILE	:=	main.cpp\
			Zombie.cpp\
			ZombieHorde.cpp
OBJ		:= 	$(FILE:.cpp=.o)
INC		:=	Zombie.hpp\
			ZombieHorde.hpp

FLAGS	:= 	-Wall -Wextra -Werror
CC		:= 	clang++

GREEN	:= 	"\x1B[1;32m"
RED		:= 	"\x1B[1;31m"
EOC		:= 	"\x1B[0m"

all : $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(FILE) -o $@
	@echo $(GREEN)"Compiling binary file..."$(EOC)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -I $(INC)
	@echo $(GREEN)"Compiling objects..."$(EOC)

clean :
	@rm -f $(OBJ)
	@echo $(RED)"Deleting objects..."$(EOC)

fclean : clean
	@rm -f $(NAME)
	@echo $(RED)"Deleting binary file..."$(EOC)

re : fclean all

.PHONY : all clean fclean re
