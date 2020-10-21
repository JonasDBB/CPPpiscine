/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 08:50:33 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 15:00:53 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARDON_H
# define PARDON_H
# include "AForm.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm&	operator=(PresidentialPardonForm const &og);
	void					action() const;
};

#endif
