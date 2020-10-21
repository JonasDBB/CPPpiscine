/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 14:46:10 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/13 17:00:32 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H
# include <iostream>

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const&	getName() const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter &target) = 0;
};

#endif
