/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:55:41 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/03 13:44:09 by jbennink      ########   odam.nl         */
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
	Zombie(std::string name="", std::string type="no-brain");
	~Zombie();
	void	announce() const;

};

#endif
