/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:51:33 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 18:03:19 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Awesome 
{
public:
	Awesome( int n ) : _n( n ) {}
	bool	operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool	operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
	bool	operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool	operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool	operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool	operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	void	print_n(void) { std::cout << this->_n << std::endl; }
	int		get_n(void) const { return (this->_n); }
private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, const Awesome &a)
{
	o << a.get_n();
	return (o);
}

template <typename T>
const T&		max (T const &a, T const &b)
{
	return (a > b ? a : b);
}

template <typename T>
const T&		min (T const &a, T const &b)
{
	return (a < b ? a : b);
}

template <typename T>
void	swap (T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void	test(void)
{
	std::cout << "\nint tests:" << std::endl;
	int i0 = 1;
	int i1 = 2;
	int i2 = 2;
	std::cout << "max of " << i0 << " and " << i1 << ": " << max(i0, i1) << std::endl;
	std::cout << "min of " << i0 << " and " << i1 << ": " << min(i0, i1) << std::endl;
	std::cout << "max of " << i2 << " and " << i1 << ": " << max(i2, i1) << std::endl;
	std::cout << "min of " << i2 << " and " << i1 << ": " << min(i2, i1) << std::endl;
	std::cout << "before swap : " << i0 << " and " << i1 << std::endl;
	swap(i0, i1);
	std::cout << "after swap  : " << i0 << " and " << i1 << std::endl;
	

	std::cout << "\ndouble tests:" << std::endl;
	double d0 = 42.3;
	double d1 = 42.8;
	double d2 = 42.8;
	std::cout << "max of " << d0 << " and " << d1 << ": " << max(d0, d1) << std::endl;
	std::cout << "min of " << d0 << " and " << d1 << ": " << min(d0, d1) << std::endl;
	std::cout << "max of " << d2 << " and " << d1 << ": " << max(d2, d1) << std::endl;
	std::cout << "min of " << d2 << " and " << d1 << ": " << min(d2, d1) << std::endl;
	std::cout << "before swap : " << d0 << " and " << d1 << std::endl;
	swap(d0, d1);
	std::cout << "after swap  : " << d0 << " and " << d1 << std::endl;

	std::cout << "\nstring tests:" << std::endl;
	std::string s0 = "hello I am a string :)";
	std::string s1 = "hello I am also a string :)";
	std::string s2 = "hello I am also a string :)";
	std::cout << "max of =" << s0 << "= and =" << s1 << "=: " << ::max(s0, s1) << std::endl;
	std::cout << "min of =" << s0 << "= and =" << s1 << "=: " << ::min(s0, s1) << std::endl;
	std::cout << "max of =" << s2 << "= and =" << s1 << "=: " << ::max(s2, s1) << std::endl;
	std::cout << "min of =" << s2 << "= and =" << s1 << "=: " << ::min(s2, s1) << std::endl;
	std::cout << "before swap : =" << s0 << "= and =" << s1 << "=" << std::endl;
	swap(s0, s1);
	std::cout << "after swap  : =" << s0 << "= and =" << s1 << "=" << std::endl;

	std::cout << "\nawesome class tests:" << std::endl;
	Awesome a1(4);
	Awesome a2(7);
	std::cout << "before swap: " << a1 << " and " << a2 << std::endl;
	swap(a1, a2);
	std::cout << "after swap: " << a1 << " and " << a2 << std::endl;
	std::cout << "min of " << a1 << " and " << a2 << ": " << ::min(a1, a2) << std::endl;
	std::cout << "max of " << a1 << " and " << a2 << ": " << ::max(a1, a2) << std::endl;
}

int		main(int ac, char **av)
{
	test();
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	if (ac > 1 && !strcmp(av[1],"leaks"))
		system(s.c_str());
	else
	{
		s += " >> leaks.txt";
		system(s.c_str());
		system("grep \"total leaked bytes\" leaks.txt");
		system("rm leaks.txt");
	}
	return (0);
}

// main from subject

// int main( void )
// {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;

// 	std::string c = "chaine1";
// 	std::string d = "chaine2";

// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }