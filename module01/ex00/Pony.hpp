/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:47:02 by jbennink      #+#    #+#                 */
/*   Updated: 2020/07/30 16:07:13 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <iostream>

class	Pony
{
	public:

		Pony(std::string, std::string, int, float, char);
		~Pony(void);

		void	showStats(void) const;

	private:

		std::string	_name;
		std::string	_color;
		int			_age;
		float		_height;
		char		_sex;
};

#endif
