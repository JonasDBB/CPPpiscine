/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:01:40 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/03 13:51:33 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _n(N)
{
	this->_horde = new Zombie[_n];
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->_horde;
}

void	ZombieHorde::announce() const
{
	for (int i = 0; i < this->_n; i++)
		this->_horde[i].announce();
}
