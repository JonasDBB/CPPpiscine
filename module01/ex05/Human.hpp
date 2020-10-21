/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 14:41:40 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/19 15:54:51 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"
# include <iostream>

class Human
{
private:
	const Brain	_br;

public:
	Human();
	~Human();
	std::string	identify() const;
	const Brain	&getBrain();
};

#endif
