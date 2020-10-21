/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:34:50 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/03 12:05:27 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
}

Zombie::~Zombie()
{
}

void	Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << "Braiiiinnnnssss....." << std::endl;
}
