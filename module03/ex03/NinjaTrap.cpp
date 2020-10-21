/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 14:06:19 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 15:30:51 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap()
{
	this->_hp = 60;
	this->_maxHp = 60;
	this->_ep = 120;
	this->_maxEp = 120;
	this->_lvl = 1;
	this->_name = "INAC-N1NJ4 <>";
	this->_meleeDmg = 60;
	this->_rangeDmg = 5;
	this->_armor = 0;
	std::cout << "INAC-N1NJ4 is born in shadows, so silent it doesn't even have a name.." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hp = 60;
	this->_maxHp = 60;
	this->_ep = 120;
	this->_maxEp = 120;
	this->_lvl = 1;
	this->_name = "INAC-N1NJ4 <" + name + ">";
	this->_meleeDmg = 60;
	this->_rangeDmg = 5;
	this->_armor = 0;
	std::cout << this->_name << " crept from the shadows!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy)
{
	*this = copy;
	std::cout << this->_name << " has split from one shadow into two!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_name << " has finally been defeated!" << std::endl;
}

void	NinjaTrap::rangedAtk(std::string const &target)
{
	std::cout << this->_name << " shoots a dart at " << target << " , dealing a modest " << this->_rangeDmg << " damage!" <<std::endl;
}

void	NinjaTrap::meleeAtk(std::string const &target)
{
	std::cout << this->_name << " sneaks up on " << target << " wounding them for " << this->_meleeDmg << " damage!" <<std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const &frag)
{
	std::cout << this->_name << " is joined by " << frag.getName() << "; together, they will rule the world!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &scav)
{
	std::cout << this->_name << " tries to convince " << scav.getName() << " to join the robolution! VIVA LA ROBOLUTION!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const &ninja)
{
	std::cout << this->_name << " stabs his brother " << ninja.getName() << " in the back!\n\"E tu, " << this->_name << "?\"" << std::endl;
}