# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jonasbb <jonasbb@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/25 15:01:53 by jonasbb       #+#    #+#                  #
#    Updated: 2020/08/25 15:02:12 by jonasbb       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = super

FLAGS = -Wall -Wextra -Werror

SRCS = FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp SuperTrap.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
