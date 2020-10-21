/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 14:17:13 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/14 11:53:05 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad()
{
	this->_count = 0;
	this->_guys = NULL;
}

Squad::Squad(Squad const &copy)
{
	this->_count = 0;
	*this = copy;
}

Squad::~Squad()
{
	for (int i = 0; i < this->_count; i++)
		delete this->_guys[i];
	if (this->_count > 0)
		delete[] this->_guys;
}

Squad&			Squad::operator=(Squad const &og)
{
	for (int i = 0; i < this->_count; i++)
		delete this->_guys[i];
	if (this->_count > 0)
		delete[] this->_guys;
	this->_count = og._count;
	this->_guys = new ISpaceMarine*[this->_count];
	for (int i = 0; i < og._count; i++)
		this->_guys[i] = og._guys[i]->clone();
	return (*this);
}

int				Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine*	Squad::getUnit(int i) const
{
	return (this->_guys[i]);
}

int				Squad::push(ISpaceMarine *guy)
{
	if (!guy)
		return (this->_count);
	for (int i = 0; i < this->_count; i++)
	{
		if (guy == this->_guys[i])
			return (this->_count);
	}
	this->_count++;
	ISpaceMarine	**newSquad = new ISpaceMarine*[this->_count];
	for (int i = 0; i < this->_count - 1; i++)
		newSquad[i] = this->_guys[i];
	newSquad[this->_count - 1] = guy;
	delete[] this->_guys;
	this->_guys = newSquad;
	return (this->_count);
}
