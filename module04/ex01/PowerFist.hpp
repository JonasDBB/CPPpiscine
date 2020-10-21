/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:53:14 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/29 09:51:54 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H
# include "AWeapon.hpp"
# include <iostream>

class PowerFist : public AWeapon
{
private:

public:
	PowerFist();
	PowerFist(PowerFist const &copy);
	virtual ~PowerFist();
	PowerFist&		operator=(PowerFist const &og);
	virtual void	attack() const;
};

#endif
