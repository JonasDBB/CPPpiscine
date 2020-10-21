/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:01:49 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/03 13:37:16 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "Zombie.hpp"
# include <iostream>

class ZombieHorde
{
private:
	int			_n;
	std::string	_type;
	Zombie		*_horde;

public:
	ZombieHorde(int N);
	~ZombieHorde();
	void	announce() const;
};


#endif
