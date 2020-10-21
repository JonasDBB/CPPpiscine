# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jonasbb <jonasbb@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/26 10:31:53 by jonasbb       #+#    #+#                  #
#    Updated: 2020/08/29 09:32:30 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = sorcerer

FLAGS = -Wall -Wextra -Werror

SRCS = Sorcerer.cpp Victim.cpp Peon.cpp Minion.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
