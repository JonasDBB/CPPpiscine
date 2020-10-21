/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:53:03 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/04 12:57:31 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string	*sPtr = &s;
	std::string	&sRef = s;

	std::cout << "ptr: " << *sPtr << std::endl;
	std::cout << "ref: " << sRef << std::endl;
	return (0);
}
