/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:00:39 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/26 15:01:41 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <iostream>

Enemy::Enemy(int hp, std::string const &type) : _type(type), _hp(hp)
{
}

Enemy::Enemy(Enemy const &copy)
{
	*this = copy;
}

Enemy::~Enemy()
{
}

Enemy&			Enemy::operator=(Enemy const &og)
{
	this->_type = og._type;
	this->_hp = og._hp;
	return (*this);
}

std::string		Enemy::getType() const
{
	return (this->_type);
}

int				Enemy::getHP() const
{
	return (this->_hp);
}

void			Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	this->_hp -= dmg;
	if (this->_hp <= 0)
		this->~Enemy();
}
