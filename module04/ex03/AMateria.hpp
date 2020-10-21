/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:01:36 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/14 12:58:02 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();

protected:
	unsigned int	_xp;
	std::string		_type;

public:
	AMateria(std::string const &type);
	AMateria(AMateria const &copy);
	virtual ~AMateria();
	AMateria&			operator=(AMateria const &og);
	std::string const&	getType() const;
	unsigned int		getXP() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter &target);
};

#endif
