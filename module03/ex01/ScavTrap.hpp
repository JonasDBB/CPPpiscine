/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 09:54:40 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/10/14 08:07:21 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>

class ScavTrap
{
private:
	int					_hp;
	int 				_maxHp;
	int					_ep;
	int 				_maxEp;
	int					_lvl;
	std::string			_name;
	int					_meleeDmg;
	int					_rangeDmg;
	int					_armor;
	
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	ScavTrap&	operator=(ScavTrap const &original);
	void		rangedAtk(std::string const &target);
	void		meleeAtk(std::string const &target);
	void		takeDmg(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);
};

#endif
