/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/13 16:43:00 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/14 12:58:06 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &copy) : AMateria("cure")
{
	this->_xp = copy._xp;
	this->_type	= copy._type;
}

Cure::~Cure()
{
}

Cure&		Cure::operator=(Cure const &og)
{
	this->_xp = og._xp;
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria *cl = new Cure(*this);
	return (cl);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() <<"\'s wounds *" << std::endl;
}
