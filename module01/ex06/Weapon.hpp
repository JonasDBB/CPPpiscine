/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 11:19:13 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/05 11:32:31 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon
{
private:
	std::string	_type;
	
public:
	Weapon(std::string type);
	~Weapon();
	void		setType(std::string type);
	std::string	getType() const;
};

#endif
