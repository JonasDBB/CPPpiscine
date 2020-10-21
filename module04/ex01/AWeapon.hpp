/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:09:18 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/26 13:28:17 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H
# include <iostream>

class AWeapon
{
private:
	AWeapon();

protected:
	std::string	_name;
	int			_ap;
	int			_dmg;

public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &copy);
	virtual ~AWeapon();
	AWeapon&		operator=(AWeapon const &og);
	std::string		getName() const;
	int				getAPCost() const;
	int				getDamage() const;
	virtual void	attack() const = 0;

};

#endif
