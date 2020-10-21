/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 09:10:03 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/29 14:54:22 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

class   Awesome 
{
public:
	Awesome(){} //added this to make array possible
	Awesome( int n ) : _n( n ) {}
	bool	operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool	operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
	bool	operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool	operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool	operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool	operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	void	print_n(void) { std::cout << this->_n << std::endl; }
	int		get_n(void) const { return (this->_n); }
	void	set_n(int n) { this->_n = n; } //added this to add value to n in case of default constructor
private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, const Awesome &a)
{
	o << a.get_n();
	return (o);
}

void	test(void)
{
	std::cout << "\ntest with int array (creating arr0)" << std::endl;
	Array<int>	arrInt0(4);
	for (unsigned int i = 0; i < arrInt0.size(); i++)
		arrInt0[i] = 2 * i;
	for (unsigned int i = 0; i < arrInt0.size(); i++)
		std::cout << arrInt0[i] << std::endl;
	
	std::cout << "\ntest with copy constructor (creating arr1)" << std::endl;
	Array<int>	arrInt1(arrInt0);
	for (unsigned int i = 0; i < arrInt1.size(); i++)
		std::cout << arrInt1[i] << std::endl;
	
	std::cout << "\nadding 1 to arr0, leaving arr1 the same (after copy constructor)" << std::endl;
	for (unsigned int i = 0; i < arrInt0.size(); i++)
		arrInt0[i] += 1;
	std::cout << "\narr0 after change" << std::endl;
	for (unsigned int i = 0; i < arrInt0.size(); i++)
		std::cout << arrInt0[i] << std::endl;
	
	std::cout << "\narr1 after change" << std::endl;
	for (unsigned int i = 0; i < arrInt1.size(); i++)
		std::cout << arrInt1[i] << std::endl;
	
	std::cout << "\nusing assignment operator to make arr1 == arr0 and then printing arr1" << std::endl;
	arrInt1 = arrInt0;
	for (unsigned int i = 0; i < arrInt1.size(); i++)
		std::cout << arrInt1[i] << std::endl;
	
	std::cout << "\ncreating array with empty constructor and printing size" << std::endl;
	Array<int>	arrInt2;
	std::cout << arrInt2.size() << std::endl;

	std::cout << "\ntrying to call on element out of bounds (arr1 on location 8)" << std::endl;
	try
	{
		std::cout << arrInt1[8] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}
	// ---------------------------------------------- //
	std::cout << "\ntest with str array" << std::endl;
	Array<std::string>	arrStr(5);
	arrStr[0] = "Hi ";
	arrStr[1] = "I ";
	arrStr[2] = "am ";
	arrStr[3] = "Jonas ";
	arrStr[4] = ":)";
	for (unsigned int i = 0; i < arrStr.size(); i++)
		std::cout << arrStr[i];
	std::cout << std::endl;

	std::cout << "\ntrying to access index 5 with size 5" << std::endl;
	try
	{
		std::cout << arrStr[5] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}
	// ---------------------------------------------- //
	std::cout << "\ntest with awesome class" << std::endl;
	Array<Awesome>	arrAwe(3);
	for (unsigned int i = 0; i < arrAwe.size(); i++)
		arrAwe[i].set_n(10 + i);
	for (unsigned int i = 0; i < arrAwe.size(); i++)
		std::cout << arrAwe[i] << std::endl;
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
