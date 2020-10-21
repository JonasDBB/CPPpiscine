/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 14:27:35 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/04 12:51:44 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string	Brain::identify() const
{
	std::stringstream p;
	p << this;
	return(p.str());
}
