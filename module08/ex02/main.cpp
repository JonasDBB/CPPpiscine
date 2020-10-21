/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 17:33:22 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/02 11:20:17 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <vector>
#include <list>

void	test(void)
{
	std::cout << "tests with ints and default (deque) stack" << std::endl;
	mutantstack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(-42);
	mstack.push(0);

	mutantstack<int>::iterator it = mstack.begin();
	mutantstack<int>::iterator ite = mstack.end();

	it++;
	it--;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::stack<int> s(mstack);

	std::cout << "\ntests with strings and vector stack\n" << std::endl;
	mutantstack<std::string, std::vector<std::string> > vstack;
	vstack.push("hi ");
	vstack.push("I ");
	vstack.push("am ");
	vstack.push("Jonas ");
	std::cout << vstack.top() << std::endl;
	vstack.push(":)");
	std::cout << vstack.top() << "\n" << std::endl;
	mutantstack<std::string, std::vector<std::string> >::iterator vit = vstack.begin();
	mutantstack<std::string, std::vector<std::string> >::iterator vite = vstack.end();
	while (vit != vite)
	{
		std::cout << *vit << std::endl;
		vit++;
	}
	std::cout << std::endl;
	std::cout << vstack.top() << std::endl;
	vstack.pop();
	std::cout << vstack.top() << std::endl;
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
