/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:21:28 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/29 09:55:47 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H
# include "Enemy.hpp"
# include <iostream>

class RadScorpion : public Enemy
{
private:

public:
	RadScorpion();
	RadScorpion(RadScorpion const &copy);
	RadScorpion&	operator=(RadScorpion const &og);
	virtual ~RadScorpion();
};

#endif
