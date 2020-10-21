/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 11:46:20 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/26 12:15:38 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim(std::string const &name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &copy)
{
	*this = copy;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim&		Victim::operator=(Victim const &og)
{
	this->_name = og._name;
	return (*this);
}

std::string	Victim::getName() const
{
	return (this->_name);
}

void		Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turuned into cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Victim const &vic)
{
	os << "I'm " << vic.getName() << " and I like otters!" << std::endl;
	return (os);
}
