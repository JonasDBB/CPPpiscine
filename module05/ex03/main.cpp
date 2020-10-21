/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 12:52:42 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 15:00:21 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void	ex03()
{
	std::cout << "\ntest with intern to create form and with regular form" << std::endl;
	try
	{
		Intern				rando;
		Form				*rrf;
		Bureaucrat			barry("Barry", 42);
		RobotomyRequestForm	robot("Also Bender");

		rrf = rando.makeForm("robotomy request", "Bender");
		std::cout << "created form is " << *rrf << std::endl;
		barry.signForm(*rrf);
		barry.executeForm(*rrf);
		std::cout << std::endl;
		barry.signForm(robot);
		barry.executeForm(robot);
		delete(rrf);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\ntest with form that doesn't exist" << std::endl;
	try
	{
		Intern				rando;
		Form				*rrf;

		rrf = rando.makeForm("prisoner transfer request", "Zaheer");
		std::cout << "created form is " << *rrf << std::endl;
		delete(rrf);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int		main(int ac, char **av)
{
	srand(time(NULL));
	// ex00();
	// ex01();
	// ex02();
	ex03();
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	if (ac > 1 && !strcmp(av[1],"leaks"))
		system(s.c_str());
	else
	{
		s += " >> leaks.txt";
		system(s.c_str());
		system("grep \"total leaked bytes\" leaks.txt");
		system("rm leaks.txt");
	}
	return (0);
}
