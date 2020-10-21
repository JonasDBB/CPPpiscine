/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 14:49:53 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/17 16:22:14 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include <iostream>

class AMateria;

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void		learnMateria(AMateria* newMat) = 0;
	virtual AMateria*	createMateria(std::string const &type) = 0;
};

#endif
