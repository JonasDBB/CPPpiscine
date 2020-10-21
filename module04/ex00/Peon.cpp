/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 12:06:53 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/29 09:29:51 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include <iostream>

Peon::Peon(std::string const &name) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &copy) : Victim(copy)
{
	*this = copy;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon&	Peon::operator=(Peon const &og)
{
	this->_name = og._name;
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}