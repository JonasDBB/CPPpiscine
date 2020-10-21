/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:25:21 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/03 12:05:23 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
private:
	std::string	_name;
	std::string	_type;

public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void	announce() const;

};

#endif
