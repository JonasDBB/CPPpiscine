# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 11:45:37 by jbennink      #+#    #+#                  #
#    Updated: 2020/08/19 16:13:39 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FLAGS = -Wall -Wextra -Werror

SRCS = Zombie.cpp ZombieEvent.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
