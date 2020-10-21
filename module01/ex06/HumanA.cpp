/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 11:18:04 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/05 11:55:25 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep) : _name(name)
{
	this->_wep = &wep;
}

HumanA::HumanA(std::string name) : _name(name)
{
	this->_wep = NULL;
}

HumanA::~HumanA()
{
}

void	HumanA::setWeapon(Weapon &wep)
{
	this->_wep = &wep;
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_wep->getType() << std::endl;
}
