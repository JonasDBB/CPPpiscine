# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/20 12:54:36 by jbennink      #+#    #+#                  #
#    Updated: 2020/09/28 14:59:35 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = intern

FLAGS = -Wall -Wextra -Werror

SRCS = Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)
	rm -f *_shrubbery

re: fclean all
