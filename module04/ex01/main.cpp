/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:57:16 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/09/01 17:35:28 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Deathclaw.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Stick.hpp"
#include "SuperMutant.hpp"
#include <iostream>

void asdf()
{
	Character*	me = new Character("me");

	std::cout << *me;

	Enemy*		b = new RadScorpion();
	Enemy*		c = new SuperMutant();
	Enemy*		d = new Deathclaw();

	AWeapon*	pr = new PlasmaRifle();
	AWeapon*	pf = new PowerFist();
	AWeapon*	st = new Stick();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);

	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->equip(pf);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->recoverAP();
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(b);

	me->equip(st);
	me->attack(d);
	delete me;
	delete pr; delete pf; delete st;
	delete b; delete c; delete d;
}

int	main()
{
	asdf();
	system("leaks wasteland >> leaks.txt");
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
	return (0);
}
