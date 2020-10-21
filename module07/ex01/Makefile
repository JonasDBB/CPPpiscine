# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/28 16:53:42 by jbennink      #+#    #+#                  #
#    Updated: 2020/09/28 16:53:49 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = iter

FLAGS = -Wall -Wextra -Werror

SRCS = iter.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
