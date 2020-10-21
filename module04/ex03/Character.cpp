/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/13 16:09:37 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/14 13:12:21 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = NULL;
	}
}

Character::Character(Character const &copy)
{
	*this = copy;
}

Character::~Character()
{
	for (unsigned int i = 0; i < this->_invCount; i++)
	{
		delete this->_inv[i];
		this->_inv[i] = NULL;
	}
}

Character&			Character::operator=(Character const &og)
{
	for (unsigned int i = 0; i < this->_invCount; i++)
	{
		delete this->_inv[i];
		this->_inv[i] = NULL;
	}
	this->_name = og._name;
	this->_invCount = og._invCount;
	for (unsigned int i = 0; i < this->_invCount; i++)
		this->_inv[i] = og._inv[i];
	return (*this);
}

std::string const&	Character::getName() const
{
	return (this->_name);
}

void				Character::equip(AMateria* m)
{
	if (this->_invCount >= 4 || !m)
		return ;
	this->_inv[this->_invCount] = m;
	this->_invCount++;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (!this->_inv[idx])
		return ;
	this->_inv[idx] = NULL;
	for (int j = 0; j <= 3; j++)
	{
		for (int i = 3; i > 0; i--)
		{
			if (!this->_inv[i - 1] && this->_inv[i])
			{
				this->_inv[i - 1] = this->_inv[i];
				this->_inv[i] = NULL;
			}
		}
	}
	this->_invCount--;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (!this->_inv[idx])
		return ;
	this->_inv[idx]->use(target);
}
