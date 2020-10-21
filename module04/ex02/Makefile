# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jonasbb <jonasbb@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/26 16:51:12 by jonasbb       #+#    #+#                  #
#    Updated: 2020/09/16 10:57:39 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = space

FLAGS = -Wall -Wextra -Werror

SRCS = AssaultTerminator.cpp Squad.cpp TacticalMarine.cpp main2.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
