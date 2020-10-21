/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:26:55 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/29 09:56:06 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy) : Enemy(copy)
{
	*this = copy;
}

RadScorpion&	RadScorpion::operator=(RadScorpion const &og)
{
	this->_type = og._type;
	this->_hp = og._hp;
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}