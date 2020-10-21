/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 12:56:32 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 17:24:20 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
protected:
	int			_hp;
	int 		_maxHp;
	int			_ep;
	int 		_maxEp;
	int			_lvl;
	std::string	_name;
	int			_meleeDmg;
	int			_rangeDmg;
	int			_armor;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();
	ClapTrap&	operator=(ClapTrap const &original);
	void		takeDmg(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName(void) const;
};

#endif
