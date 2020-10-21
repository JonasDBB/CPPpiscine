/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Deathclaw.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 09:58:52 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/29 10:28:53 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Deathclaw.hpp"
#include "Enemy.hpp"
#include <iostream>

Deathclaw::Deathclaw() : Enemy(255, "Deathclaw")
{
	std::cout << "WHRAAAH!" << std::endl;
}

Deathclaw::Deathclaw(Deathclaw const &copy) : Enemy(copy)
{
	*this = copy;
}

Deathclaw::~Deathclaw()
{
	std::cout << "* gurgling noises *" << std::endl;
}

Deathclaw&	Deathclaw::operator=(Deathclaw const &og)
{
	this->_type = og._type;
	this->_hp = og._hp;
	return (*this);
}

void	Deathclaw::takeDamage(int dmg)
{
	(void)dmg;
	std::cout << "The Deathclaw tries to dodge you, but you just manage to hit them!" << std::endl;
}