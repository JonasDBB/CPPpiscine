/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 11:09:18 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/10/14 11:46:36 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string	_name;
	std::string	_title;
	Sorcerer();

public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const &copy);
	virtual ~Sorcerer();
	Sorcerer&	operator=(Sorcerer const &og);
	std::string	getName() const;
	std::string	getTitle() const;
	void		polymorph(Victim const &vic) const;
};

std::ostream&	operator<<(std::ostream& os, Sorcerer const &sorc);

#endif
