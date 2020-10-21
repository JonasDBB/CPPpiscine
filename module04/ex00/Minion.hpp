/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Minion.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 09:27:29 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/14 11:45:53 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINION_H
# define MINION_H
# include <iostream>
# include "Victim.hpp"

class Minion : public Victim
{
private:
	Minion();

public:
	Minion(std::string const &name);
	Minion(Minion const &copy);
	virtual ~Minion();
	Minion&			operator=(Minion const &og);
	virtual void	getPolymorphed() const;
};

#endif
