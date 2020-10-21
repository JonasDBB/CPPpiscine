#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include <iostream>

void	asdf(void)
{
	ISpaceMarine	*bob = new TacticalMarine();
	ISpaceMarine	*jim = new AssaultTerminator();

	ISquad			*vlc = new Squad();
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine	*cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	// rest van de tests:

	std::cout << ">>> Creating a new squad with 5 units." << std::endl;
	Squad			*squad1 = new Squad();
	for (int i = 0; i < 5; i++)
	{
		ISpaceMarine	*tmp;
		if (i % 2 == 0)
			tmp = new TacticalMarine();
		else
			tmp = new AssaultTerminator();
		std::cout << ">>> Push returns: " << squad1->push(tmp) << std::endl;
	}
	std::cout << ">>> Copying:" << std::endl;
	Squad			*squad2 = new Squad(*squad1);

	std::cout << ">>> Printing memory adress of first member of both squads." << std::endl;
	std::cout << squad1->getUnit(0) << std::endl;
	std::cout << squad2->getUnit(0) << std::endl;
	std::cout << ">>> Done copying, deleting the old squad." << std::endl;
	delete squad1;
	std:: cout << "calling battlecries." << std::endl;
	std::cout << ">>> Deleting the copied squad" << std::endl;
	delete squad2;

	std::cout << ">>> Testing assignation with existing squad" << std::endl;
	squad1 = new Squad();
	squad1->push(new TacticalMarine());
	squad1->push(new AssaultTerminator());
	squad2 = new Squad();
	for (int i = 0; i < 5; i++)
	{
		squad2->push(new TacticalMarine());
	}
	std::cout << ">>> Assigning squad 1 to squad 2" << std::endl;
	*squad2 = *squad1;
	std::cout << ">>> Deleting both squads, copies with identical units" << std::endl;
	delete squad1;
	delete squad2;
	bob = 0;
	jim = 0;
	vlc = 0;
	squad1 = 0;
	squad2 = 0;
}

int main(void)
{
	asdf();
	system("leaks space >> leaks.txt");
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
	return (0);
}