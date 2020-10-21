/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   classes.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 11:37:15 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 11:53:46 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_H
# define CLASSES_H

class Base
{
public:
	virtual ~Base();
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif
