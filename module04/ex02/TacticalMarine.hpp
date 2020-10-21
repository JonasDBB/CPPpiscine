/* ************************************************************************** */
/*                                      */
/*                            ::::::::      */
/*   TacticalMarine.hpp         :+: :+:      */
/*                           +:+          */
/*   By: jbennink <jbennink@student.codam.nl>       +#+                */
/*                           +#+                      */
/*   Created: 2020/08/30 11:21:55 by jbennink     #+#  #+#             */
/*   Updated: 2020/08/30 18:45:53 by jbennink     ########   odam.nl       */
/*                                      */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &copy);
	virtual ~TacticalMarine();
	TacticalMarine&	operator=(TacticalMarine const &og);
	ISpaceMarine*	clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};

#endif
