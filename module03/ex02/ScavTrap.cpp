/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:15:49 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 15:23:55 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_ep = 50;
	this->_maxEp = 50;
	this->_lvl = 1;
	this->_name = "SC4V-TP <>";
	this->_meleeDmg = 20;
	this->_rangeDmg = 15;
	this->_armor = 3;
	std::cout << "SC4V-TP has been created, but has no name :(" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_ep = 50;
	this->_maxEp = 50;
	this->_lvl = 1;
	this->_name = "SC4V-TP <" + name + ">";
	this->_meleeDmg = 20;
	this->_rangeDmg = 15;
	this->_armor = 3;
	std::cout << this->_name << " has been created! Yay!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
	std::cout << "A new " << this->_name << " has been copied!" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "" << this->_name << " has exploded in a fiery rain of scrap!" << std::endl;
}

void	ScavTrap::rangedAtk(std::string const &target)
{
	std::cout << this->_name << " shoots " << target << " from afar, maiming them for " << this->_rangeDmg << " damage!" <<std::endl;
}

void	ScavTrap::meleeAtk(std::string const &target)
{
	std::cout << this->_name << " stabs " << target << " sneakily in their back, dealing " << this->_meleeDmg << " damage!" <<std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	std::string	challenges[5] = {"Hey vaulthunter, stop stealing my scrap!",
						"Welcome, oh glorious scav masters!",
						"My minions have returned!",
						"You'll never get past me! ... Wait! Get back here!",
						"Who's a good moon doggie? Aaaaaand he's eating me. AAAHH!"};
	std::cout << "" << this->_name << " welcomes the new arrival: " << std::endl << challenges[rand() % 5] << std::endl;
}
	// std::cout << "A new " << this->_name << " was made to look exactly like the old one!" << std::endl;
