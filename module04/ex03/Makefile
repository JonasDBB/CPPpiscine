# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/12 22:19:02 by jbennink      #+#    #+#                  #
#    Updated: 2020/09/12 22:20:04 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = matter

FLAGS = -Wall -Wextra -Werror

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
