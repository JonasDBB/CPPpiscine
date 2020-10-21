# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/01 13:26:02 by jbennink      #+#    #+#                  #
#    Updated: 2020/10/01 13:26:41 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = span

FLAGS = -Wall -Wextra -Werror

SRCS = span.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
