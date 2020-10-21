/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Stick.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 09:53:09 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/29 09:54:58 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Stick.hpp"
#include "AWeapon.hpp"
#include <iostream>

Stick::Stick() : AWeapon("Mighty Stick", 1, 1)
{
}

Stick::Stick(Stick const &copy) : AWeapon(copy)
{
	*this = copy;
}

Stick::~Stick()
{
}

Stick&	Stick::operator=(Stick const &og)
{
	this->_name = og._name;
	this->_ap = og._ap;
	this->_dmg = og._dmg;
	return (*this);
}

void	Stick::attack() const
{
	std::cout << "* THUNK *" << std::endl;
}
