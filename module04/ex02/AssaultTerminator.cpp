/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 19:04:20 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/16 12:05:20 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = copy;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator&	AssaultTerminator::operator=(AssaultTerminator const &og)
{
	(void)og;
	return (*this);
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	ISpaceMarine*	guy = new AssaultTerminator(*this);
	return (guy);
}

void				AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
