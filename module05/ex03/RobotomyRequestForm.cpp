/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 08:39:15 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/24 10:40:01 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("robotomy request", 72, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &og)
{
	setTarget(og.getTarget());
	setSigned(og.getSigned());
	return (*this);
}

void					RobotomyRequestForm::action() const
{
	if (rand() % 2)
		std::cout << this->getTarget() << " has been succesfully robotomized." << std::endl;
	else
		std::cout << "Robotomization of " << this->getTarget() << " failed." << std::endl;
}
