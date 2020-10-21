/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 12:10:05 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 12:48:49 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>

class FragTrap
{
private:
	int			_hp;
	int 		_maxHp;
	int			_ep;
	int 		_maxEp;
	int			_lvl;
	std::string	_name;
	int			_meleeDmg;
	int			_rangeDmg;
	int			_armor;
	void		_rubberDucky(std::string const &target);
	void		_blightBot(std::string const &target);
	void		_mechromagician(std::string const &target);
	void		_meatUnicycle(std::string const &target);
	void		_pirateShipMode(std::string const &target);


public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &copy);
	~FragTrap();
	FragTrap&	operator=(FragTrap const &original);
	void		rangedAtk(std::string const &target);
	void		meleeAtk(std::string const &target);
	void		takeDmg(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const &target);
};

#endif
