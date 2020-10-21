/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:21:14 by jbennink      #+#    #+#                 */
/*   Updated: 2020/07/30 16:23:32 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak(void)
{
	std::string	*panther = new std::string("String panther");
	
	std::cout << *panther << std::endl;
	delete panther;
}