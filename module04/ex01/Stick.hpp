/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Stick.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 09:51:05 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/29 09:53:27 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STICK_H
# define STICK_H
# include "AWeapon.hpp"
# include <iostream>

class Stick : public AWeapon
{
private:

public:
	Stick();
	Stick(Stick const &copy);
	virtual ~Stick();
	Stick&		operator=(Stick const &og);
	virtual void	attack() const;
};

#endif
