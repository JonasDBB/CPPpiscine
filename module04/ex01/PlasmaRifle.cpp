/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:43:44 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/29 09:52:37 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy)
{
	*this = copy;
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const &og)
{
	this->_name = og._name;
	this->_ap = og._ap;
	this->_dmg = og._dmg;
	return (*this);
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
