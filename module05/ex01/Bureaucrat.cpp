/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 12:51:08 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/20 21:11:05 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low!");
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const &og)
{
	this->_grade = og._grade;
	return (*this);
}

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void			Bureaucrat::gradeInc()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void			Bureaucrat::gradeDec()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void			Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << *this << " signs " << f << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << *this << " cannot sign " << f << " because " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat const &bc)
{
	os << bc.getName() << ", bureaucrat grade " << bc.getGrade();
	return (os);
}
