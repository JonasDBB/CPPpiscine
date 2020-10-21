/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/13 16:28:56 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/17 16:40:56 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"

class Ice : public AMateria
{
private:
	
public:
	Ice();
	Ice(Ice const &copy);
	virtual ~Ice();
	Ice&		operator=(Ice const &og);
	AMateria*	clone() const;
	void		use(ICharacter &target);
};

#endif
