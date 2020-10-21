/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 12:10:05 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 15:21:59 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public virtual ClapTrap
{
private:
	void	_rubberDucky(std::string const &target);
	void	_blightBot(std::string const &target);
	void	_mechromagician(std::string const &target);
	void	_meatUnicycle(std::string const &target);
	void	_pirateShipMode(std::string const &target);

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &copy);
	~FragTrap();
	void	rangedAtk(std::string const &target);
	void	meleeAtk(std::string const &target);
	void	vaulthunter_dot_exe(std::string const &target);
};

#endif
