/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:20:16 by jbennink      #+#    #+#                 */
/*   Updated: 2020/07/28 14:44:21 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook(void) 
{
	this->_nr = 0;
}

Phonebook::~Phonebook(void) 
{

}

void	Phonebook::addContact(void) 
{
	std::string	input;

	if (this->_nr >= 8)
	{
		std::cout << "phonebook is full!" << std::endl;
		return ;
	}
	_list[_nr].askAll();
	this->_nr++;
}

void	Phonebook::search() const
{
	std::string	temp;
	int			j;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(11) << std::right << "index|";
	std::cout << std::setw(11) << std::right << "first name|";
	std::cout << std::setw(11) << std::right << "last name|";
	std::cout << std::setw(11) << std::right << "nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 1; i <= this->_nr; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << this->_list[i - 1].getFirstName() << "|";
		std::cout << std::setw(10) << std::right << this->_list[i - 1].getLastName() << "|";
		std::cout << std::setw(10) << std::right << this->_list[i - 1].getNickname() << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "enter index of contact: ";
	std::getline(std::cin, temp);
	if (temp.length() != 1 || !isdigit(temp[0]))
	{
		std::cout << "please enter a valid index!" << std::endl;
		return ;
	}
	j = temp[0] - '0';
	if (j > 0 && j <= this->_nr)
		this->_list[j - 1].printContact();
	else
		std::cout << "index doesn't exist" << std::endl;
}
