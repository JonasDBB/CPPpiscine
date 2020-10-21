/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:53:50 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/29 09:52:49 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy)
{
	*this = copy;
}

PowerFist::~PowerFist()
{
}

PowerFist&	PowerFist::operator=(PowerFist const &og)
{
	this->_name = og._name;
	this->_ap = og._ap;
	this->_dmg = og._dmg;
	return (*this);
}

void	PowerFist::attack() const
{
	std::cout << "* pschh... SBAM! *" << std::endl;
}
