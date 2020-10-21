/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 17:16:55 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/20 21:15:19 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low!");
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

void			Form::beSigned(Bureaucrat const &br)
{
	if (br.getGrade() > this->_signReqGrade)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

std::ostream&	operator<<(std::ostream &os, Form const &f)
{
	os << "Form name: " << f.getName() << "\nSign status: " << f.getSigned() << "\nRequired grade to sign: " << f.getSignReq() << "\nRequired grade to execute: " << f.getExecReq() << std::endl;
	return (os);
}
