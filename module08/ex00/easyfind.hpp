/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 14:59:32 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/01 13:24:06 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
# include <iostream>
# include <iterator>

template<typename T>
typename T::iterator	easyfind(T container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw std::exception();
	return (it);
}

#endif
