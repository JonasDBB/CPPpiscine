/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 14:42:25 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/19 15:56:18 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

Human::Human() : _br()
{
}

Human::~Human()
{
	this->_br.~Brain();
}

const Brain&	Human::getBrain()
{
	return (this->_br);
}

std::string		Human::identify() const
{
	return (this->_br.identify());
}
