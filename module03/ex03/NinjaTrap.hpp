/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 14:02:28 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 15:21:44 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class NinjaTrap : public virtual ClapTrap
{
private:

public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &copy);
	~NinjaTrap();
	void	rangedAtk(std::string const &target);
	void	meleeAtk(std::string const &target);
	void	ninjaShoebox(FragTrap const &frag);
	void	ninjaShoebox(ScavTrap const &scav);
	void	ninjaShoebox(NinjaTrap const &ninja);
};

#endif
