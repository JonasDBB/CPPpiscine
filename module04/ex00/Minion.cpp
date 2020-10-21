/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Minion.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 09:30:01 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/29 09:30:59 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Minion.hpp"
#include "Victim.hpp"
#include <iostream>

Minion::Minion(std::string const &name) : Victim(name)
{
	this->_name = name;
	std::cout << "Yes master!" << std::endl;
}

Minion::Minion(Minion const &copy) : Victim(copy)
{
	*this = copy;
}

Minion::~Minion()
{
	std::cout << "Whyyyy!!" << std::endl;
}

Minion&	Minion::operator=(Minion const &og)
{
	this->_name = og._name;
	return (*this);
}

void	Minion::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a fish, splashing around on the land!" << std::endl;
}