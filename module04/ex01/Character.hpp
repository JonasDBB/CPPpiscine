/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:28:04 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/26 15:03:18 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string	_name;
	int			_ap;
	AWeapon*	_wep;
	Character();

public:
	Character(std::string const &name);
	Character(Character const &copy);
	~Character();
	Character&	operator=(Character const &og);
	void		recoverAP();
	void		equip(AWeapon* wep);
	void		attack(Enemy* enemy);
	std::string	getName() const;
	int			getAP() const;
	AWeapon*	getWep() const;
};

std::ostream&	operator<<(std::ostream& os, Character const &chr);

#endif
