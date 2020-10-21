/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:46:45 by jbennink      #+#    #+#                 */
/*   Updated: 2020/07/30 16:09:06 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "==Start of stack function==" << std::endl;
	Pony	stack = Pony("stack", "dun", 1, 5.2, 'm');
	Pony	*heap = new Pony("heap", "black", 2, 4.8, 'f');
	delete heap;
	std::cout << " ==End of stack function==" << std::endl;
	return (0);
}
