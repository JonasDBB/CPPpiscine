/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:06:19 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 17:28:24 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
private:

public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &copy);
	~SuperTrap();
	void	rangedAtk(std::string const &target);
	void	meleeAtk(std::string const &target);
};

#endif
