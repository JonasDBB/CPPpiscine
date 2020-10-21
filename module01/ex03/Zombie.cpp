/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:54:52 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/03 13:47:32 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	if (name == "")
	{
		std::string	names[20] = {"Emma", "Liam", "Olivia", "Noah",
			"Ava", "William", "Isabella", "James", "Sophia", "Oliver",
			"Charlotte", "Benjamin", "Mia", "Elijah", "Amelia",
			"Lucas", "Harper", "Mason", "Evelyn", "Logan"};
		this->_name = names[rand() % 20];
	}
}

Zombie::~Zombie()
{
}

void	Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << "Braiiiinnnnssss....." << std::endl;
}
