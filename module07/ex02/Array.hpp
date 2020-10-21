/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 09:10:49 by jbennink      #+#    #+#                 */
/*   Updated: 2020/10/15 16:20:48 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>

template<typename T>
class Array
{
private:
	unsigned int	_size;
	T*				_arr;
public:
	
	class OutOfBounds : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Index is larger than array size!");
			}
	};
	
	Array() : _size(0)
	{
		this->_arr = NULL;
	}
	
	Array(unsigned int n) : _size(n)
	{
		this->_arr = new T[n];
	}

	Array(Array const &copy)
	{
		this->_size = 0;
		*this = copy;
	}

	~Array()
	{
		if (this->_size)
			delete[] this->_arr;
	}

	Array&			operator=(Array const &og)
	{
		if (this->_size)
			delete[] this->_arr;
		this->_size = og._size;
		if (!this->_size)
			return (*this);
		this->_arr = new T[this->_size];
		for (unsigned int i = 0; i < og._size; i++)
			this->_arr[i] = og._arr[i];
		return (*this);
	}

	T&				operator[](unsigned int const &i) const
	{
		if (i >= this->_size)
			throw OutOfBounds();
		return (this->_arr[i]);
	}

	unsigned int	size(void) const
	{
		return (this->_size);
	}
};

#endif
