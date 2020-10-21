/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 11:28:28 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/26 11:57:41 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string const &name, std::string const &title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	*this = copy;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&	Sorcerer::operator=(Sorcerer const &og)
{
	this->_name = og._name;
	this->_title = og._title;
	return (*this);
}

std::string	Sorcerer::getName() const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle() const
{
	return (this->_title);
}

void		Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}

std::ostream& operator<<(std::ostream& os, Sorcerer const &sorc)
{
	os << "I am " << sorc.getName() << ", " << sorc.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}