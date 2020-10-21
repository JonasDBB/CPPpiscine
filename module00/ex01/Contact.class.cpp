/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:55:39 by jbennink      #+#    #+#                 */
/*   Updated: 2020/07/28 14:08:23 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::askInput(std::string question, std::string *input)
{
	std::cout << question;
	std::getline(std::cin, *input);
}

void	Contact::printContact(void) const {
	std::cout << std::setw(18) << std::left << "First name:" << this->_firstName << std::endl;
	std::cout << std::setw(18) << std::left << "Last name:" << this->_lastName << std::endl;
	std::cout << std::setw(18) << std::left << "Nickname:" << this->_nickname << std::endl;
	std::cout << std::setw(18) << std::left << "Login:" << this->_login << std::endl;
	std::cout << std::setw(18) << std::left << "Postal address:" << this->_postalAddress << std::endl;
	std::cout << std::setw(18) << std::left << "Email address:" << this->_emailAddress << std::endl;
	std::cout << std::setw(18) << std::left << "Phone number:" << this->_phoneNumber << std::endl;
	std::cout << std::setw(18) << std::left << "Birthdate:" << this->_birthdate << std::endl;
	std::cout << std::setw(18) << std::left << "Favourite meal:" << this->_favouriteMeal << std::endl;
	std::cout << std::setw(18) << std::left << "Underwear colour:" << this->_underwearColour << std::endl;
	std::cout << std::setw(18) << std::left << "Darkest secret:" << this->_darkestSecret << std::endl;
}

void	Contact::askAll(void)
{
	askInput("Enter first name: ", &this->_firstName);
	askInput("Enter last name: ", &this->_lastName);
	askInput("Enter nickname: ", &this->_nickname);
	askInput("Enter login: ", &this->_login);
	askInput("Enter postal address: ", &this->_postalAddress);
	askInput("Enter email address: ", &this->_emailAddress);
	askInput("Enter phone number: ", &this->_phoneNumber);
	askInput("Enter birthdate: ", &this->_birthdate);
	askInput("Enter favourite meal: ", &this->_favouriteMeal);
	askInput("Enter underwear colour: ", &this->_underwearColour);
	askInput("Enter darkest secret: ", &this->_darkestSecret);
}

std::string Contact::getFirstName(void) const
{
	std::string	result;

	result = this->_firstName;
	if (this->_firstName.length() > 10)
	{
		result.resize(9);
		result += ".";
	}
	return (result);
}

std::string Contact::getLastName(void) const
{
	std::string	result;

	result = this->_lastName;
	if (this->_lastName.length() > 10)
	{
		result.resize(9);
		result += ".";
	}
	return (result);
}

std::string Contact::getNickname(void) const
{
	std::string	result;

	result = this->_nickname;
	if (this->_nickname.length() > 10)
	{
		result.resize(9);
		result += ".";
	}
	return (result);
}
