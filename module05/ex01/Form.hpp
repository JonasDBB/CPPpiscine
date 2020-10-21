/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 16:58:01 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/21 08:06:46 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_signed;
	int const			_signReqGrade;
	int const			_execReqGrade;
	Form();
public:
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();		
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();		
	};
	Form(std::string const &name, int signReq, int execReq);
	Form(Form const &copy);
	~Form();
	Form&		operator=(Form const &og);
	std::string	getName() const;
	bool		getSigned() const;
	int			getSignReq() const;
	int			getExecReq() const;
	void		beSigned(Bureaucrat const &br);
};

std::ostream&	operator<<(std::ostream &os, Form const &f);

#endif
