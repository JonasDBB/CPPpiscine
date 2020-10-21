/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 12:52:42 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 15:02:14 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	ex02()
{
	srand(time(NULL));
	std::cout << "test to execute shrubbery form" << std::endl;
	try
	{
		Bureaucrat	barry("Barry", 42);
		ShrubberyCreationForm	shrub("Magrathea");
		barry.signForm(shrub);
		barry.executeForm(shrub);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\ntest to execute robotomy form" << std::endl;
	try
	{
		Bureaucrat	barry("Barry", 4);
		RobotomyRequestForm	robot("Arthur Dent");
		barry.signForm(robot);
		barry.executeForm(robot);
		barry.executeForm(robot);
		barry.executeForm(robot);
		barry.executeForm(robot);
		barry.executeForm(robot);
		barry.executeForm(robot);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\ntest to execute presidential pardon form" << std::endl;
	try
	{
		Bureaucrat	barry("Barry", 2);
		PresidentialPardonForm	pardon("Ford");
		barry.signForm(pardon);
		barry.executeForm(pardon);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\ntrying to execute unsigned form" << std::endl;
	try
	{
		Bureaucrat	barry("Barry", 2);
		PresidentialPardonForm	pardon("Ford");
		barry.executeForm(pardon);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\ncan sign, can't execute" << std::endl;
	try
	{
		Bureaucrat	barry("Barry", 140);
		ShrubberyCreationForm	shrub("home");
		barry.signForm(shrub);
		barry.executeForm(shrub);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int		main(int ac, char **av)
{
	ex02();
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
