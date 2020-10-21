# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jonasbb <jonasbb@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/25 09:51:29 by jonasbb       #+#    #+#                  #
#    Updated: 2020/08/25 09:52:46 by jonasbb       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = scav

FLAGS = -Wall -Wextra -Werror

SRCS = FragTrap.cpp ScavTrap.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
