/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/13 16:35:04 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/17 18:17:32 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &copy) : AMateria("ice")
{
	this->_xp = copy._xp;
	this->_type	= copy._type;
}

Ice::~Ice()
{
}

Ice&		Ice::operator=(Ice const &og)
{
	this->_xp = og._xp;
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria *cl = new Ice(*this);
	return (cl);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
