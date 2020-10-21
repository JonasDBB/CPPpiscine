/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 11:49:40 by jbennink      #+#    #+#                 */
/*   Updated: 2020/07/28 14:04:13 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string		input;

	while (1)
	{
		std::cout << "Enter a command (add / search / exit): ";
		std::getline(std::cin, input);
		if (input == "exit" || input == "EXIT")
			return (0);
		if (input == "add" || input == "ADD")
			phonebook.addContact();
		if (input == "search" || input == "SEARCH")
			phonebook.search();
	}
}
