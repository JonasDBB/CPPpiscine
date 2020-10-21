/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 13:27:28 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/01 17:24:32 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
# include <iostream>
# include <vector>
# include <algorithm>

class span
{
private:
	unsigned int const	_max;
	std::vector<int>	_nbrs;
	span();

public:
	class SpanFullException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class NoSpanToFindException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	span(unsigned int n);
	span(span const &copy);
	~span();
	span&			operator=(span const &og);
	void			addNumber(int n);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void) const;
	
	template<typename T>
	void	addRange(T first, T last)
	{
		if (this->_nbrs.size() + std::distance(first, last) > this->_max)
			throw SpanFullException();
		this->_nbrs.insert(this->_nbrs.end(), first, last);
	}
};

#endif
