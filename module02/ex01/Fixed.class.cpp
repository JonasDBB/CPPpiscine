/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 11:13:34 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/24 11:19:59 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "default constructor called" << std::endl;
	this->_n = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int in)
{
	std::cout << "int constructor called" << std::endl;
	this->_n = in  * (1 << nbrFractionalBits);
}

Fixed::Fixed(float fl)
{
	std::cout << "float constructor called" << std::endl;
	this->_n = roundf(fl * (1 << nbrFractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

Fixed&			Fixed::operator=(Fixed const &rh)
{
	std::cout << "assignation operator called" << std::endl;
	this->_n = rh.getRawBits();
	return (*this);
}

int				Fixed::getRawBits() const
{
	return (this->_n);
}

void			Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

int				Fixed::toInt(void) const
{
	return (this->_n / (1 << nbrFractionalBits));
}

float			Fixed::toFloat(void) const
{
	return ((float)this->_n / (float)(1 << nbrFractionalBits));
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fpr)
{
	os << fpr.toFloat();
	return (os);
}
