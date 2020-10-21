/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 14:51:03 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/14 13:12:38 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void	asdf()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->unequip(2);

	me->use(0, *bob);
	me->unequip(0);
	me->use(0, *bob);
	delete tmp1;
	delete bob;
	delete me;
	delete src;
}

int		main(int ac, char **av)
{
	asdf();
	if (ac > 1 && !strcmp(av[1],"full"))
		system("leaks matter");
	else
	{
		system("leaks matter >> leaks.txt");
		system("grep \"total leaked bytes\" leaks.txt");
		system("rm leaks.txt");
	}
	return (0);
}