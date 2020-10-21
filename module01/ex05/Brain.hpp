/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 14:26:45 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/04 12:51:57 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain
{
private:

public:
	Brain();
	~Brain();
	std::string	identify() const;
};

#endif
