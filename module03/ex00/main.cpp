/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 12:09:38 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/25 12:51:46 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	srand(time(NULL));
	FragTrap	ft0("claptrap");
	FragTrap	ft1("clappie");
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
