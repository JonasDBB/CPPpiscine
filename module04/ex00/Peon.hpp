/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 11:58:27 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/10/14 11:46:48 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();

public:
	Peon(std::string const &name);
	Peon(Peon const &copy);
	virtual ~Peon();
	Peon&			operator=(Peon const &og);
	virtual void	getPolymorphed() const;
};

#endif
