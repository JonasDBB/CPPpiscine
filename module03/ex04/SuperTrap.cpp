/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:09:00 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 17:35:49 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap()
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_ep = 120;
	this->_maxEp = 120;
	this->_lvl = 1;
	this->_name = "5UP3R <>";
	this->_meleeDmg = 60;
	this->_rangeDmg = 20;
	this->_armor = 5;
	std::cout << "5UP3R comes to save the day, but has no name!" << std::endl;
}


SuperTrap::SuperTrap(std::string name)
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_ep = 120;
	this->_maxEp = 120;
	this->_lvl = 1;
	this->_name = "5UP3R <" + name + ">";
	this->_meleeDmg = 60;
	this->_rangeDmg = 20;
	this->_armor = 5;
	std::cout << this->_name <<" joins the battle!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy)
{
	*this = copy;
	std::cout << this->_name << " called upon it's twin for help!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->_name << " died in service of the people!" << std::endl;
}

void	SuperTrap::rangedAtk(std::string const &target)
{
	FragTrap::rangedAtk(target);
}

void	SuperTrap::meleeAtk(std::string const &target)
{
	NinjaTrap::meleeAtk(target);
}
