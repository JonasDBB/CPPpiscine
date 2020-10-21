/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 11:54:39 by jbennink      #+#    #+#                 */
/*   Updated: 2020/07/28 13:24:35 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>

class	Contact
{
	public:

		Contact(void);
		~Contact(void);

		void		askInput(std::string, std::string*);
		void		askAll(void);
		void		printContact(void) const;
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;

	private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_login;
		std::string	_postalAddress;
		std::string	_emailAddress;
		std::string	_phoneNumber;
		std::string	_birthdate;
		std::string	_favouriteMeal;
		std::string	_underwearColour;
		std::string	_darkestSecret;
};

#endif
