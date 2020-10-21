/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Deathclaw.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 09:57:54 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/29 09:58:44 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEATHCLAW_H
# define DEATHCLAW_H
# include "Enemy.hpp"
# include <iostream>

class Deathclaw : public Enemy
{
private:

public:
	Deathclaw();
	Deathclaw(Deathclaw const &copy);
	virtual ~Deathclaw();
	Deathclaw&		operator=(Deathclaw const &og);
	virtual void	takeDamage(int dmg);
};

#endif
