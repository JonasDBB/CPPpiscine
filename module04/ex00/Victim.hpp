/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 11:42:38 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/10/14 11:46:23 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H
# include <iostream>

class Victim
{
private:
	Victim();

protected:
	std::string	_name;

public:
	Victim(std::string const &name);
	Victim(Victim const &copy);
	virtual ~Victim();
	Victim&			operator=(Victim const &og);
	std::string		getName() const;
	virtual void	getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& os, Victim const &vic);

#endif
