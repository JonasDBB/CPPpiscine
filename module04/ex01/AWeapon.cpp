/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:19:29 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/26 13:28:11 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <iostream>

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _ap(apcost), _dmg(damage)
{
}

AWeapon::AWeapon(AWeapon const &copy)
{
	*this = copy;
}

AWeapon::~AWeapon()
{
}

AWeapon&	AWeapon::operator=(AWeapon const &og)
{
	this->_name = og._name;
	this->_ap = og._ap;
	this->_dmg = og._dmg;
	return (*this);
}

std::string	AWeapon::getName() const
{
	return (this->_name);
}

int			AWeapon::getAPCost() const
{
	return(this->_ap);
}

int			AWeapon::getDamage() const
{
	return(this->_dmg);
}
