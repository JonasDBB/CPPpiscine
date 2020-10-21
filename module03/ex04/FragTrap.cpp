/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 12:09:25 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 17:25:52 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_ep = 100;
	this->_maxEp = 100;
	this->_lvl = 1;
	this->_name = "FR4G-TP <>";
	this->_meleeDmg = 30;
	this->_rangeDmg = 20;
	this->_armor = 5;
	std::cout << "FR4G-TP has been created, but has no name :(" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_hp = 100;
	this->_maxHp = 100;
	this->_ep = 100;
	this->_maxEp = 100;
	this->_lvl = 1;
	this->_name = "FR4G-TP <" + name + ">";
	this->_meleeDmg = 30;
	this->_rangeDmg = 20;
	this->_armor = 5;
	std::cout << this->_name << " has been created! Yay!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
	std::cout << "A new " << this->_name << " has been copied!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " has been destroyed! Oh no!" << std::endl;
}

void	FragTrap::rangedAtk(std::string const &target)
{
	std::cout << this->_name << " attacks " << target << " at range, causing " << this->_rangeDmg << " points of damage!" <<std::endl;
}

void	FragTrap::meleeAtk(std::string const &target)
{
	std::cout << this->_name << " attacks " << target << " up close, causing " << this->_meleeDmg << " points of damage!" <<std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	typedef void(FragTrap::*fpointer)(std::string const &target);
	fpointer	pointers[] = {&FragTrap::_rubberDucky, &FragTrap::_blightBot, &FragTrap::_mechromagician, &FragTrap::_meatUnicycle, &FragTrap::_pirateShipMode};
	if (this->_ep < 25)
	{
		std::cout << "Not enough energy?! How could this happen?!" << std::endl;
		return ;
	}
	this->_ep -= 25;
	(this->*pointers[rand() % 5])(target);
}

void	FragTrap::_rubberDucky(std::string const &target)
{
	std::cout << this->_name << " bounces in the air and reflects 15 damage back to " << target << "!" <<std::endl;
}

void	FragTrap::_blightBot(std::string const &target)
{
	std::cout << this->_name << " summons a Sirentrap that flies around and deals 25 damage to " << target << "!" <<std::endl;
}

void	FragTrap::_mechromagician(std::string const &target)
{
	std::cout << this->_name << " summons a Punkbot that claws " << target << " for 35 damage!" <<std::endl;
}

void	FragTrap::_meatUnicycle(std::string const &target)
{
	std::cout << this->_name << " pulls out a Buzz Axe and proceeds to slash " << target << " for 45 damage!" <<std::endl;
}

void	FragTrap::_pirateShipMode(std::string const &target)
{
	std::cout << this->_name << " dons a pirate hat atop a mast and four cannons and fires at " << target << " to the tune of Tchaikovsky's 1812 Overture, dealing 55 damage!" <<std::endl;
}

int		FragTrap::getHp(void) const
{
	return (this->_hp);
}

int		FragTrap::getMaxHp(void) const
{
	return (this->_maxHp);
}