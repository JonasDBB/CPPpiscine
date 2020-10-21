/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 12:56:30 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 15:18:43 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("") 
{
	std::cout << "A ClapTrap base has been constructed, but it is nameless :(" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :  _name(name) 
{
	std::cout << "A ClapTrap base " << this->_name << " was given life! Fear and tremble!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "A copy ClapTrap " << this->_name << " to join it's brother!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " was slain in heroic battle!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &original)
{
	this->_hp = original._hp;
	this->_maxHp = original._maxHp;
	this->_ep = original._ep;
	this->_maxEp = original._maxEp;
	this->_lvl = original._lvl;
	this->_name = original._name;
	this->_meleeDmg = original._meleeDmg;
	this->_rangeDmg = original._rangeDmg;
	this->_armor = original._armor;
	return (*this);
}

void	ClapTrap::takeDmg(unsigned int amount)
{
	if ((int)amount >= this->_armor)
		amount -= this->_armor;
	else
		amount = 0;
	this->_hp -= amount;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << this->_name << " takes " << amount << " damage!" <<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	if (this->_hp > this->_maxHp)
		this->_hp = this->_maxHp;
	std::cout << this->_name << " is repaired for " << amount << " hp and has " << this->_hp << " hp left!" <<std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}
