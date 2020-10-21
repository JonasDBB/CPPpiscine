/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:36:47 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/29 09:52:07 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H
# include "AWeapon.hpp"
# include <iostream>

class PlasmaRifle : public AWeapon
{
private:

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &copy);
	virtual ~PlasmaRifle();
	PlasmaRifle&		operator=(PlasmaRifle const &og);
	virtual void	attack() const;
};

#endif
