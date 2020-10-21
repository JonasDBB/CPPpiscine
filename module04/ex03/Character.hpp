/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/13 15:59:32 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/17 16:42:57 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	Character();
	std::string		_name;
	unsigned int	_invCount;
	AMateria		*_inv[4];

public:
	Character(std::string const &name);
	Character(Character const &copy);
	virtual ~Character();
	Character&			operator=(Character const &og);
	std::string const&	getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
	
};

#endif
