/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:32:48 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/10/14 11:49:55 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const &name) : _name(name), _ap(40), _wep(NULL)
{
}

Character::Character(Character const &copy)
{
	*this = copy;
}

Character::~Character()
{
}

Character&	Character::operator=(Character const &og)
{
	this->_name = og._name;
	this->_ap = og._ap;
	this->_wep = og._wep;
	return (*this);
}

void		Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void		Character::equip(AWeapon* wep)
{
	this->_wep = wep;
}

void		Character::attack(Enemy* enemy)
{
	if (enemy->getHP() <= 0)
	{
		std::cout << enemy->getType() << " is already dead!" << std::endl;
		return ;
	}
	if (this->_wep->getAPCost() > this->_ap)
	{
		std::cout << this->_name << " does not have enough AP to attack!" << std::endl;
		std::cout << "(They have " << this->_ap << " AP and they need " << this->_wep->getAPCost() << " to attack!)" << std::endl; 
	}
	else
	{
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_wep->getName() << std::endl;
		this->_ap -= this->_wep->getAPCost();
		this->_wep->attack();
		enemy->takeDamage(this->_wep->getDamage());
	}
}

std::string	Character::getName() const
{
	return (this->_name);
}

int			Character::getAP() const
{
	return (this->_ap);
}

AWeapon*	Character::getWep() const
{
	return (this->_wep);
}

std::ostream& operator<<(std::ostream& os, Character const &chr)
{
	if (!chr.getWep())
		os << chr.getName() << " has " << chr.getAP() << " AP and is unarmed" << std::endl;
	else
		os << chr.getName() << " has " << chr.getAP() << " AP and wields a " << chr.getWep()->getName() << std::endl;
	return (os);
}
