/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:24:43 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/03 11:52:16 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int	main(void)
{
	ZombieEvent	ev;

	srand(time(NULL));
	ev.setType("slow as fuck");
	Zombie	first = Zombie("numba one", ev.getType());
	first.announce();
	ev.setType("fast boi");
	Zombie	two = Zombie("numba too", ev.getType());
	two.announce();
	ev.setType("hungry");
	for (unsigned int i = 10; i < 20; i++)
	{
		Zombie	*chump = ev.randomChump();
		delete chump;
	}
	return (0);
}
