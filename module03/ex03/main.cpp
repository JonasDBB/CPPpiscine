/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 10:34:32 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 14:45:57 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

void	fragtrap(void)
{
	FragTrap	ft0("Claptrap");
	FragTrap	ft1("Clappie");
	FragTrap	ft2 = ft0;
	FragTrap	ft3;

	ft0.rangedAtk("Handsome Jack");
	ft0.meleeAtk("Handsome Jack");
	ft0.takeDmg(50);
	ft0.beRepaired(30);
	ft0.beRepaired(30);
	ft0.vaulthunter_dot_exe("Handsome Jack");
	ft0 = ft1;
	ft0.vaulthunter_dot_exe("Handsome Jack");
}

void	scavtrap(void)
{
	ScavTrap	st0("Scavvy Travvy");
	ScavTrap	st1("Scav McScavington");
	ScavTrap	st2 = st1;
	ScavTrap	st3;

	st0.rangedAtk("the Vaulthunters");
	st0.meleeAtk("the Vaulthunters");
	st0.takeDmg(40);
	st0.beRepaired(25);
	st0.beRepaired(25);
	st0.challengeNewcomer();
	st0 = st1;
	st0.challengeNewcomer();
}

void	ninjatrap(void)
{
	NinjaTrap	nt0("Interplanetary Ninja Assassin Claptrap");
	NinjaTrap	nt1("Trappy");
	FragTrap	ft0("Fraggy");
	ScavTrap	sv0("Scavvy");

	nt0.rangedAtk("you");
	nt0.meleeAtk("you");
	nt0.ninjaShoebox(ft0);
	nt0.ninjaShoebox(sv0);
	nt0.ninjaShoebox(nt1);
}

int		main(void)
{
	srand(time(NULL));
	// fragtrap();
	// std::cout << std::endl;
	// scavtrap();
	// std::cout << std::endl;
	ninjatrap();
}
