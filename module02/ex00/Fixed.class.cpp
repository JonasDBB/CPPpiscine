/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 11:13:34 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/19 16:20:47 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

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

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &rh)
{
	std::cout << "assignation operator called" << std::endl;
	this->_n = rh.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getrawbits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}
