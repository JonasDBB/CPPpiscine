/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 07:44:28 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/22 12:30:42 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

const char	*Intern::FormUnknownException::what() const throw()
{
	return ("Form could not be created, intern doesn't know it!");
}

Intern::Intern()
{
}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern::~Intern()
{
}

Intern&	Intern::operator=(Intern const &og)
{
	(void)og;
	return (*this);
}

Form*	Intern::makeForm(std::string const &name, std::string const &target)
{
	Form	*ret;
	Form	*forms[3];
	
	forms[0] = new PresidentialPardonForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new ShrubberyCreationForm(target);

	ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(forms[i]->getName()))
			ret = forms[i];
	}
	if (ret)
		std::cout << "Intern creates " << *ret << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] != ret)
			delete forms[i];
	}
	if (!ret)
		throw Intern::FormUnknownException();
	return (ret);
}
