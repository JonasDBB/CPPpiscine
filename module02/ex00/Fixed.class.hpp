/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 11:07:34 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/19 16:21:39 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

class Fixed
{
private:
	int					_n;
	static const int	nbrFractionalBits = 8;

public:
	Fixed();
	Fixed(Fixed const &copy);
	~Fixed();
	Fixed&	operator=(Fixed const &rh);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
