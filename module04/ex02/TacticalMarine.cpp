/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 18:48:26 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/16 11:46:18 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = copy;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine&	TacticalMarine::operator=(TacticalMarine const &og)
{
	(void)og;
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone() const
{
	std::cout << "cloning..." << std::endl;
	ISpaceMarine*	guy = new TacticalMarine(*this);
	return (guy);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
