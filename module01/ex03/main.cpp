/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:53:59 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/03 13:52:05 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int	main()
{
	srand(time(NULL));
	ZombieHorde	horde = ZombieHorde(3);
	horde.announce();
	return(0);
}
