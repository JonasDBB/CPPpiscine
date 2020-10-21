/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/13 16:42:35 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/13 16:42:46 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	
public:
	Cure();
	Cure(Cure const &copy);
	virtual ~Cure();
	Cure&		operator=(Cure const &og);
	AMateria*	clone() const;
	void		use(ICharacter &target);
};

#endif
