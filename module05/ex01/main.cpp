/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 12:52:42 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/24 10:59:37 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	ex00()
{
	//testing to see regular usage
	std::cout << "Regular:" << std::endl;
	try
	{
		Bureaucrat	petey("Petey", 42);
		std::cout << petey << std::endl;
		petey.gradeDec();
		std::cout << petey << std::endl;
		petey.gradeInc();
		std::cout << petey << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// testing with increasing over highest grade
	std::cout << "Inc over highest:" << std::endl;
	try
	{
		Bureaucrat	pauley("Pauley", 2);
		pauley.gradeInc();
		pauley.gradeInc();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// testing with decreasing under lowest grade
	std::cout << "Dec under lowest:" << std::endl;
	try
	{
		Bureaucrat	piper("Piper", 149);
		piper.gradeDec();
		piper.gradeDec();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// testing with grade too high in constructor
	std::cout << "Too high in constructor:" << std::endl;
	try
	{
		Bureaucrat	louie("Louie", 0);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// testing with grade too low in constructor
	std::cout << "Too low in constructor:" << std::endl;
	try
	{
		Bureaucrat	Hirold("Hirold", 151);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	ex01()
{
	std::cout << "test to sign form" << std::endl;
	try
	{
		Bureaucrat	barry("Barry", 42);
		Form		carform("Car", 42, 30);
		barry.signForm(carform);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "test with too low grade from bureaucrat to sign" << std::endl;
	try
	{
		Bureaucrat	barry("Barry", 42);
		Form		carform("Car", 40, 30);
		barry.signForm(carform);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "creating form with wrong grades" << std::endl;
	try
	{
		Form		carform("Car", 42, 0);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "creating form with wrong grades" << std::endl;
	try
	{
		Form		carform("Car", 151, 42);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int		main(int ac, char **av)
{
	// ex00();
	ex01();
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
