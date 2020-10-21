/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:35:11 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/03 11:51:21 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setType(std::string type)
{
	this->_type = type;
}

std::string	ZombieEvent::getType() const
{
	return (this->_type);
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie	*ret = new Zombie(name, this->_type);
	return (ret);
}

Zombie	*ZombieEvent::randomChump()
{
	std::string	names[20] = {"Emma", "Liam", "Olivia", "Noah",
		"Ava", "William", "Isabella", "James", "Sophia", "Oliver",
		"Charlotte", "Benjamin", "Mia", "Elijah", "Amelia",
		"Lucas", "Harper", "Mason", "Evelyn", "Logan"};
	Zombie	*ret = this->newZombie(names[rand() % 20]);
	ret->announce();
	return (ret);
}
