/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 14:59:04 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/01 13:25:18 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

void	test(void)
{
	std::vector<int>	vc;
	vc.push_back(1);
	vc.push_back(3);
	vc.push_back(5);
	
	try
	{
		std::cout << *(easyfind(vc, 3)) << " found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "couldn't find int" << std::endl;
	}
	try
	{
		std::cout << *(easyfind(vc, 4)) << " found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "couldn't find int" << std::endl;
	}
	
}

int		main(int ac, char **av)
{
	test();
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	std::cout << std::endl;
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
