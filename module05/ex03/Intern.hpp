/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 07:44:25 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 15:00:16 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
# include "AForm.hpp"
class Intern
{
private:

public:
	class FormUnknownException : public std::exception
	{
		public:
			virtual const char* what() const throw();		
	};
	Intern();
	Intern(Intern const &copy);
	~Intern();
	Intern&	operator=(Intern const &og);
	Form*	makeForm(std::string const &name, std::string const &target);
};

#endif
