# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/28 13:51:11 by jbennink      #+#    #+#                  #
#    Updated: 2020/09/28 13:51:25 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = whatever

FLAGS = -Wall -Wextra -Werror

SRCS = whatever.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
