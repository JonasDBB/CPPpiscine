/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:17:59 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/10/14 11:48:13 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	this->_dmgReduction = 3;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy)
{
	*this = copy;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator=(SuperMutant const &og)
{
	this->_type = og._type;
	this->_hp = og._hp;
	this->_dmgReduction = og._dmgReduction;
	return (*this);
}

void	SuperMutant::takeDamage(int dmg)
{
	dmg -= this->_dmgReduction;
	if (dmg < 0)
		return ;
	this->_hp -= dmg;
	if (this->_hp <= 0)
		this->~SuperMutant();
}