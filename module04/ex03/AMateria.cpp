/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:05:21 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/13 16:46:23 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _xp(0), _type(type)
{
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria::~AMateria()
{
}

AMateria&			AMateria::operator=(AMateria const &og)
{
	this->_xp = og._xp;
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (this->_type);
}

unsigned int		AMateria::getXP() const
{
	return (this->_xp);
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
