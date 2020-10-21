/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 11:01:46 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/01 17:05:25 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int				_count;
	ISpaceMarine	**_guys;
public:
	Squad();
	Squad(Squad const &copy);
	virtual ~Squad();
	Squad&					operator=(Squad const &og);
	virtual int				getCount() const;
	virtual ISpaceMarine*	getUnit(int i) const;
	virtual int				push(ISpaceMarine *guy);
};

#endif
