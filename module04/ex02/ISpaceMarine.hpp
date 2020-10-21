/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 16:55:59 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/09/01 16:45:58 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H
# include "ISquad.hpp"

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine*	clone() const = 0;
	virtual void			battleCry() const = 0;
	virtual void			rangedAttack() const = 0;
	virtual void			meleeAttack() const = 0;
};

#endif
