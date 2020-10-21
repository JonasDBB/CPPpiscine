/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 11:51:48 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/05 11:52:15 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &wep) : _name(name)
{
	this->_wep = &wep;
}

HumanB::HumanB(std::string name) : _name(name)
{
	this->_wep = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &wep)
{
	this->_wep = &wep;
}

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_wep->getType() << std::endl;
}
