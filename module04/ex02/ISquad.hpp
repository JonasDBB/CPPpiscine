/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 16:53:15 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/09/01 17:17:46 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H
# include "ISpaceMarine.hpp"

class ISpaceMarine;

class ISquad
{
public:
	virtual ~ISquad() {}
	virtual int	getCount() const = 0;
	virtual ISpaceMarine* getUnit(int i) const = 0;
	virtual int	push(ISpaceMarine *guy) = 0;
};

#endif
