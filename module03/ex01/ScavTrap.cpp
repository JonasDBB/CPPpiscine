/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:15:49 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/10/14 08:07:11 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : _hp(100), _maxHp(100), _ep(50), _maxEp(50), _lvl(1), _name(""), _meleeDmg(20), _rangeDmg(15), _armor(3) 
{
	std::cout << "Sc4V-TP was born from scraps, but nobody gave him a name :(" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _hp(100), _maxHp(100), _ep(50), _maxEp(50), _lvl(1), _name(name), _meleeDmg(20), _rangeDmg(15), _armor(3) 
{
	std::cout << "Sc4V-TP <" << this->_name << "> was born from scraps!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
	std::cout << "A new Sc4V-TP <" << this->_name << "> was made to look exactly like the old one!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Sc4V-TP <" << this->_name << "> has exploded in a fiery rain of scrap!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &original)
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

void	ScavTrap::rangedAtk(std::string const &target)
{
	std::cout << "Sc4V-TP <" << this->_name << "> shoots " << target << " from afar, maiming them for " << this->_rangeDmg << " damage!" <<std::endl;
}

void	ScavTrap::meleeAtk(std::string const &target)
{
	std::cout << "Sc4V-TP <" << this->_name << "> stabs " << target << " sneakily in their back, dealing " << this->_meleeDmg << " damage!" <<std::endl;
}

void	ScavTrap::takeDmg(unsigned int amount)
{
	if ((int)amount >= this->_armor)
		amount -= this->_armor;
	else
		amount = 0;
	this->_hp -= amount;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "Sc4V-TP <" << this->_name << "> takes " << amount << " damage!" <<std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	if (this->_hp > this->_maxHp)
		this->_hp = this->_maxHp;
	std::cout << "Sc4V-TP <" << this->_name << "> is repaired for " << amount << " hp and has " << this->_hp << " hp left!" <<std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{	std::string const	challenges[5] =
						{"Hey vaulthunter, stop stealing my scrap!",
						"Welcome, oh glorious scav masters!",
						"My minions have returned!",
						"You'll never get past me! ... Wait! Get back here!",
						"Who's a good moon doggie? Aaaaaand he's eating me. AAAHH!"};

	std::cout << "Sc4V-TP <" << this->_name << "> welcomes the new arrival: " << std::endl << challenges[rand() % 5] << std::endl;
}