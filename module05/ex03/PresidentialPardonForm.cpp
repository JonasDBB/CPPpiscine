/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 08:51:54 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 15:01:01 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("presidential pardon", 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy)
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &og)
{
	setTarget(og.getTarget());
	setSigned(og.getSigned());
	return (*this);
}

void					PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
