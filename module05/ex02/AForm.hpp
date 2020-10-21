/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 16:58:01 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/23 11:25:18 by jbennink      ########   odam.nl         */
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
	std::string 		_target;
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
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();		
	};
	Form(std::string const &name, int signReq, int execReq);
	Form(Form const &copy);
	virtual ~Form();
	Form&			operator=(Form const &og);
	std::string		getName() const;
	bool			getSigned() const;
	int				getSignReq() const;
	int				getExecReq() const;
	std::string		getTarget() const;
	void			setSigned(bool s);
	void			setTarget(std::string const &target);
	void			beSigned(Bureaucrat const &br);
	virtual void	action() const = 0;
	void			execute(Bureaucrat const &executor) const;
};

std::ostream&	operator<<(std::ostream &os, Form const &f);

#endif
