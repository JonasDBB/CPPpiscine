/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:20:14 by jbennink      #+#    #+#                 */
/*   Updated: 2020/07/28 13:24:39 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include "Contact.class.hpp"

class	Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);

		void	addContact(void);
		void	search(void) const;

	private:

		int		_nr;
		Contact	_list[8];
};

#endif
