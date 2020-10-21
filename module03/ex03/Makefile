# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jonasbb <jonasbb@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/25 14:01:32 by jonasbb       #+#    #+#                  #
#    Updated: 2020/08/25 14:01:45 by jonasbb       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ninja

FLAGS = -Wall -Wextra -Werror

SRCS = FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
