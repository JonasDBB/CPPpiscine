/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 11:17:16 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/05 11:55:05 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
	std::string	_name;
	Weapon		*_wep;

public:
	HumanB(std::string name, Weapon &wep);
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &wep);
	void	attack() const;
};

#endif
