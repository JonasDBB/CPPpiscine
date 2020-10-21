/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 11:17:12 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/05 11:50:29 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
	std::string	_name;
	Weapon		*_wep;

public:
	HumanA(std::string name, Weapon &wep);
	HumanA(std::string name);
	~HumanA();
	void	setWeapon(Weapon &wep);
	void	attack() const;
};

#endif
