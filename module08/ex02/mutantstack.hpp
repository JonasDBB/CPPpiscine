/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 17:33:46 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/02 11:14:37 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <iostream>
# include <stack>
# include <deque>

template <typename T, class container = std::deque<T> >
class mutantstack : public std::stack<T, container>
{
private:

public:
	typedef typename container::iterator iterator;	
	mutantstack() {}
	mutantstack(mutantstack const &copy)
		{ *this = copy; }
	~mutantstack() {}
	mutantstack&	operator=(mutantstack const &og)
	{
		std::stack<T, container>::operator=(og);
		return (*this);
	}
	typename container::iterator begin(void)
		{ return (this->c.begin()); }
	typename container::iterator end(void)
		{ return (this->c.end()); }
};

#endif
