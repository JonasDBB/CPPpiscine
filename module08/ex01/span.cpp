/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 14:01:01 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/01 17:31:44 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

const char	*span::SpanFullException::what() const throw()
{
	return ("Can't add more integers, already at capacity.");
}

const char	*span::NoSpanToFindException::what() const throw()
{
	return ("Can't find span, there are not enough integers.");
}

span::span(unsigned int n) : _max(n)
{
}

span::span(span const &copy) : _max(copy._max)
{
	*this = copy;
}

span::~span()
{
}

span&			span::operator=(span const &og)
{
	this->_nbrs = og._nbrs;
	return (*this);
}

void			span::addNumber(int n)
{
	if (this->_nbrs.size() >= this->_max)
		throw SpanFullException();
	this->_nbrs.push_back(n);
}

unsigned int	span::shortestSpan()
{
	unsigned int ret = longestSpan();
	std::sort(this->_nbrs.begin(), this->_nbrs.end());
	for (unsigned int i = 1; i < this->_nbrs.size(); i++)
		ret = std::min<unsigned int>(ret, this->_nbrs[i] - this->_nbrs[i - 1]);
	return (ret);
}

unsigned int	span::longestSpan() const
{
	int	min = *(std::min_element(this->_nbrs.begin(), this->_nbrs.end()));
	int	max = *(std::max_element(this->_nbrs.begin(), this->_nbrs.end()));
	unsigned int ret = max - min;
	return (ret);
}
