/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:16:26 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/29 09:56:48 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H
# include "Enemy.hpp"
# include <iostream>

class SuperMutant : public Enemy
{
private:
	int	_dmgReduction;
public:
	SuperMutant();
	SuperMutant(SuperMutant const &copy);
	virtual ~SuperMutant();
	SuperMutant&	operator=(SuperMutant const &og);
	virtual void	takeDamage(int dmg);
};

#endif
