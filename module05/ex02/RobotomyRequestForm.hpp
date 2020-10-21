/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 08:37:48 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 15:02:12 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_H
# define ROBOTOMY_H
# include "AForm.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm&	operator=(RobotomyRequestForm const &og);
	void					action() const;
};

#endif
