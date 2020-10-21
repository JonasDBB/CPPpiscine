/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 17:16:55 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 14:59:52 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low!");
}

const char	*Form::FormNotSignedException::what() const throw()
{
	return ("Form is not signed!");
}

Form::Form(std::string const &name, int signReq, int execReq) : _name(name), _signed(false), _signReqGrade(signReq), _execReqGrade(execReq)
{
	if (signReq < 1)
		throw Form::GradeTooHighException();
	else if (signReq > 150)
		throw Form::GradeTooLowException();
	if (execReq < 1)
		throw Form::GradeTooHighException();
	else if (execReq > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &copy) : _signReqGrade(copy._signReqGrade), _execReqGrade(copy._execReqGrade)
{
	*this = copy;
}

Form::~Form()
{
}

Form&			Form::operator=(Form const &og)
{
	this->_signed = og._signed;
	return (*this);
}

std::string		Form::getName() const
{
	return (this->_name);
}

bool			Form::getSigned() const
{
	return (this->_signed);
}

int				Form::getSignReq() const
{
	return (this->_signReqGrade);
}

int				Form::getExecReq() const
{
	return (this->_execReqGrade);
}

std::string		Form::getTarget() const
{
	return (this->_target);
}

void			Form::setSigned(bool s)
{
	this->_signed = s;
}

void			Form::setTarget(std::string const &target)
{
	this->_target = target;
}

void			Form::beSigned(Bureaucrat const &br)
{
	if (br.getGrade() > this->_signReqGrade)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

void			Form::execute(Bureaucrat const &executor) const
{
	if (!this->_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > this->_execReqGrade)
		throw GradeTooLowException();
	this->action();
}

std::ostream&	operator<<(std::ostream &os, Form const &f)
{
	os << "{Form name: " << f.getName() << ", signed[";
	f.getSigned() ? os << "y" : os << "n";
	os << "], sign req: " << f.getSignReq() << ", exec req: " << f.getExecReq() << "}";
	return (os);
}
