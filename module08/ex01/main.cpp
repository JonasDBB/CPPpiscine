/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 13:27:02 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/01 17:31:36 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void	test(void)
{
	std::cout << "basic functionality, mostly given main" << std::endl;
	span sp = span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(-9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try
	{
		sp.addNumber(-4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "trying min and max int" << std::endl;
	span sp0 = span(6);
	sp0.addNumber(INT32_MIN);
	sp0.addNumber(INT32_MAX);
	std::cout << sp0.shortestSpan() << std::endl;
	std::cout << sp0.longestSpan() << std::endl;

	std::cout << "printing short and long for 100000" << std::endl;
	span sp1 = span(100000);
	std::vector<int> vct;
	for (int i = 0; i < 99998; i++)
		vct.push_back(rand());
	sp1.addRange(vct.begin(), vct.end());
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	
	std::cout << "trying to add range with not enough space left" << std::endl;
	std::vector<int> vct0;
	for (int i = 0; i < 10; i++)
		vct0.push_back(rand());
	try
	{
		sp1.addRange(vct0.begin(), vct0.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int		main(int ac, char **av)
{
	srand(time(NULL));
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
