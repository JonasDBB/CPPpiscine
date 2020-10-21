/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 22:00:07 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/07 09:31:23 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _known(0)
{
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	for (unsigned int i = 0; i < this->_known; i++)
		delete this->_memory[i];
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &og)
{
	for (unsigned int i = 0; i < this->_known; i++)
		delete this->_memory[i];
	this->_known = og._known;
	for (unsigned int i = 0; i < this->_known; i++)
		this->_memory[i] = og._memory[i]->clone();
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* newmat)
{
	if (this->_known >= 4 || !newmat)
		return ;
	this->_memory[this->_known] = newmat;	
	this->_known++;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (unsigned int i = 0; i < this->_known; i++)
	{
		if (!this->_memory[i]->getType().compare(type))
			return (this->_memory[i]->clone());
	}
	return (NULL);
}
