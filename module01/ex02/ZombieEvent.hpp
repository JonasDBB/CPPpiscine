/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:34:25 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/03 11:50:49 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H
# include "Zombie.hpp"
# include <iostream>

class ZombieEvent
{
private:
	std::string	_type;
	
public:
	ZombieEvent();
	~ZombieEvent();
	void		setType(std::string type);
	std::string	getType() const;
	Zombie*		newZombie(std::string name);
	Zombie* 	randomChump();
};

#endif
