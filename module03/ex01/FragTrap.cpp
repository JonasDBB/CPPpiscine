/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 12:09:25 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 13:09:55 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : _hp(100), _maxHp(100), _ep(100), _maxEp(100), _lvl(1), _name(""), _meleeDmg(30), _rangeDmg(20), _armor(5) 
{
	std::cout << "FR4G-TP has been created, but has no name :(" << std::endl;
}

FragTrap::FragTrap(std::string name) : _hp(100), _maxHp(100), _ep(100), _maxEp(100), _lvl(1), _name(name), _meleeDmg(30), _rangeDmg(20), _armor(5) 
{
	std::cout << "FR4G-TP <" << this->_name << "> has been created! Yay!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
	std::cout << "A new FR4G-TP <" << this->_name << "> has been copied!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << this->_name << "> has been destroyed! Oh no!" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &original)
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

void	FragTrap::rangedAtk(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << " at range, causing " << this->_rangeDmg << " points of damage!" <<std::endl;
}

void	FragTrap::meleeAtk(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << " up close, causing " << this->_meleeDmg << " points of damage!" <<std::endl;
}

void	FragTrap::takeDmg(unsigned int amount)
{
	if ((int)amount >= this->_armor)
		amount -= this->_armor;
	else
		amount = 0;
	this->_hp -= amount;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "FR4G-TP <" << this->_name << "> takes " << amount << " damage!" <<std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	if (this->_hp > this->_maxHp)
		this->_hp = this->_maxHp;
	std::cout << "FR4G-TP <" << this->_name << "> is repaired for " << amount << " hp and has " << this->_hp << " hp left!" <<std::endl;
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
	std::cout << "FR4G-TP <" << this->_name << "> bounces in the air and reflects 15 damage back to " << target << "!" <<std::endl;
}

void	FragTrap::_blightBot(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> summons a Sirentrap that flies around and deals 25 damage to " << target << "!" <<std::endl;
}

void	FragTrap::_mechromagician(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> summons a Punkbot that claws " << target << " for 35 damage!" <<std::endl;
}

void	FragTrap::_meatUnicycle(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> pulls out a Buzz Axe and proceeds to slash " << target << " for 45 damage!" <<std::endl;
}

void	FragTrap::_pirateShipMode(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> dons a pirate hat atop a mast and four cannons and fires at " << target << " to the tune of Tchaikovsky's 1812 Overture, dealing 55 damage!" <<std::endl;
}
