/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 11:54:09 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 17:20:02 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "classes.hpp"

Base::~Base() {}

void	identify_from_pointer(Base *p)
{
	// if you dynamic cast a pointer to type that it isn't, the cast will return a NULL
	std::cout << std::setw(16) << std::left << "from pointer: ";
	Base *cl0 = dynamic_cast<A*>(p);
	if (cl0)
		std::cout << "A";	
	Base *cl1 = dynamic_cast<B*>(p);
	if (cl1)
		std::cout << "B";	
	Base *cl2 = dynamic_cast<C*>(p);
	if (cl2)
		std::cout << "C";	
	std::cout << std::endl;
}

void	lol(Base &ref)
{
	(void)ref;
}

void	identify_from_reference(Base &p)
{
	// if you dynamic cast a reference to a type that it isn't, it will throw a bad_cast exception
	std::cout << std::setw(16) << std::left << "from reference: ";
	try
	{
		lol(dynamic_cast<A&>(p));
		std::cout << "A";	
	}
	catch(const std::exception &e)
	{}
	try
	{
		lol(dynamic_cast<B&>(p));
		std::cout << "B";	
	}
	catch(const std::exception &e)
	{}
	try
	{
		lol(dynamic_cast<C&>(p));
		std::cout << "C";	
	}
	catch(const std::exception &e)
	{}
	std::cout << std::endl;
}

Base	*generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return (new A());
	if (i == 1)
		return (new B());
	return (new C());
}

void	test(void)
{
	Base *cl = generate();
	identify_from_pointer(cl);
	identify_from_reference(*cl);
	delete cl;
}

int		main(int ac, char **av)
{
	srand(time(NULL));
	test();
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
