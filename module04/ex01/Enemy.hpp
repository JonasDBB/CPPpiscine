/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jonasbb <jonasbb@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:55:34 by jonasbb       #+#    #+#                 */
/*   Updated: 2020/08/26 14:15:30 by jonasbb       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H
# include <iostream>

class Enemy
{
private:
	Enemy();
protected:
	std::string	_type;
	int			_hp;
	
public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &copy);
	virtual ~Enemy();
	Enemy&			operator=(Enemy const &og);
	std::string		getType() const;
	int				getHP() const;
	virtual void	takeDamage(int dmg);
};

#endif
