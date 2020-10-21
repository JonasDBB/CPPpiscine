# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 11:45:37 by jbennink      #+#    #+#                  #
#    Updated: 2020/08/19 16:15:14 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = weapon

FLAGS = -Wall -Wextra -Werror

SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
