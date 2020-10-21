/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:46:57 by jbennink      #+#    #+#                 */
/*   Updated: 2020/07/30 16:08:44 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <iomanip>

Pony::Pony(std::string name, std::string color, int age, float height, char sex) : _name(name), _color(color), _age(age), _height(height), _sex(sex)
{
	std::cout << "A pony named " << this->_name << " is born. :)" << std::endl;
	return;
}

Pony::~Pony(void)
{
	std::cout << "The pony named " << this->_name << " has died. :(" << std::endl;
	return;
}

void	Pony::showStats(void) const
{
	std::cout << std::setw(13) << std::left << "color is: " << this->_color << std::endl;
	std::cout << std::setw(13) << std::left << "age is: " << this->_age << std::endl;
	std::cout << std::setw(13) << std::left << "height is: " << this->_height << std::endl;
	std::cout << std::setw(13) << std::left << "sex is: " << this->_sex << std::endl;
}
