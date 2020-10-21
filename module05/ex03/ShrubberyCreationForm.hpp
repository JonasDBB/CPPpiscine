/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 08:04:59 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 15:01:16 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_H
# define SHRUBBERY_H
# include "AForm.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
	std::string static const	trees;
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &og);
	void					action() const;
};

#endif
