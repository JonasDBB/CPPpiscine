/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 19:04:18 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/16 11:50:30 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:

public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &copy);
	virtual ~AssaultTerminator();
	AssaultTerminator&	operator=(AssaultTerminator const &og);
	ISpaceMarine*		clone() const;
	void				battleCry() const;
	void				rangedAttack() const;
	void				meleeAttack() const;
};

#endif
