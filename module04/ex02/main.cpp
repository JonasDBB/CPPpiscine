/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 19:06:59 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/01 17:43:45 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <iostream>

void	asdf()
{
	ISpaceMarine*	bob = new TacticalMarine;
	ISpaceMarine*	jim = new AssaultTerminator;
	ISpaceMarine*	joe = jim->clone();
	ISquad*			vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(joe);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete (vlc);
}

int main()
{
	asdf();
	system("leaks space >> leaks.txt");
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
	return (0);
}