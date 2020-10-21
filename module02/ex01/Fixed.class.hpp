/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 11:07:34 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/24 11:22:38 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
# include <iostream>

class Fixed
{
private:
	int					_n;
	static const int	nbrFractionalBits = 8;

public:
	Fixed();
	Fixed(Fixed const &copy);
	Fixed(int in);
	Fixed(float fl);	
	~Fixed();
	Fixed&		operator=(Fixed const &rh);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fpr);

#endif
