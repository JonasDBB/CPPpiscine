# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/20 12:54:36 by jbennink      #+#    #+#                  #
#    Updated: 2020/09/20 16:56:47 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrats

FLAGS = -Wall -Wextra -Werror

SRCS = Bureaucrat.cpp Form.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
