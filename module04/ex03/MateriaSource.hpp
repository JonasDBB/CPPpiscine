/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 21:53:23 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/17 16:31:04 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria		*_memory[4];
	unsigned int	_known;
	
public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	virtual ~MateriaSource();
	MateriaSource&		operator=(MateriaSource const &og);
	virtual void		learnMateria(AMateria* newMat);
	virtual AMateria*	createMateria(std::string const &type);

};

#endif
