/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 11:05:22 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/29 09:32:40 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Minion.hpp"

int	main()
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Minion		min("Jonas");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(min);
	return (0);
}
