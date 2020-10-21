# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jonasbb <jonasbb@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/25 12:51:29 by jonasbb       #+#    #+#                  #
#    Updated: 2020/08/25 12:55:54 by jonasbb       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = clap

FLAGS = -Wall -Wextra -Werror

SRCS = FragTrap.cpp ScavTrap.cpp ClapTrap.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
