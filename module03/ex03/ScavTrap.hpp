/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 09:54:40 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 15:22:10 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public virtual ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	void	rangedAtk(std::string const &target);
	void	meleeAtk(std::string const &target);
	void	challengeNewcomer(void);
};

#endif
