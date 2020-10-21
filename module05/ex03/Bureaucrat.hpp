/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 12:51:33 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 15:00:06 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include "AForm.hpp"

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
	Bureaucrat();
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
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat const &og);
	std::string	getName() const;
	int			getGrade() const;
	void		gradeInc();
	void		gradeDec();
	void		signForm(Form &f) const;
	void		executeForm(Form const &form);
};

std::ostream&	operator<<(std::ostream &os, Bureaucrat const &bc);

#endif
