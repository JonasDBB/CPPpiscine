/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 09:03:20 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 17:42:22 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void)
{
	char	*st = new char[20];
	for (int i = 0; i < 8; i++)
	{
		char c = rand() % 122;
		while (!std::isalpha(c) && !std::isdigit(c))	
			c = rand() % 122;
		st[i] = c;
		std::cout << c;
	}
	int x = rand();
	int neg = rand() % 2;
	if (neg)
		x *= -1;
	std::cout << " | " << x << " | ";
	
	*(reinterpret_cast<int*>(st + 8)) = x;
	for (int i = 12; i < 20; i++)
	{
		char c = rand() % 122;
		while (!std::isalpha(c) && !std::isdigit(c))	
			c = rand() % 122;
		st[i] = c;
		std::cout << c;
	}
	std::cout << std::endl;
	return (st);
}

Data	*deserialize(void *raw)
{
	Data *ret = new Data;
	for (int i = 0; i < 8; i++)
		ret->s1 += *(reinterpret_cast<char*>(raw) + i);
	ret->n = *(reinterpret_cast<int*>(raw) + (8 / sizeof(int)));
	for (int i = 12; i < 20; i++)
		ret->s2 += *(reinterpret_cast<char*>(raw) + i);
	return (ret);
}

void	test(void)
{
	srand(time(NULL));
	void	*raw = serialize();
	std::cout << raw << std::endl;
	Data	*dat1 = deserialize(raw);
	std::cout << dat1->s1 << " | " << dat1->n << " | " << dat1->s2 << std::endl;
	delete reinterpret_cast<char*>(raw);
	delete (dat1);
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
