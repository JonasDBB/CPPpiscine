/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 16:13:47 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/28 09:34:01 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cmath>

enum	e_type {
	type_char,
	type_int,
	type_float,
	type_double,
	type_other
};

bool	others(std::string input)
{
	if (!input.compare("nan") || !input.compare("nanf"))
	{
		std::cout << "char:\timpossible\nint:\timpossible\nfloat:\tnanf\ndouble:\tnan" << std::endl;
		return (true);
	}
	if (!input.compare("-inf") || !input.compare("-inff"))
	{
		std::cout << "char:\timpossible\nint:\timpossible\nfloat:\t-inff\ndouble:\t-inf" << std::endl;
		return (true);
	}
	if (!input.compare("+inf") || !input.compare("+inff") || !input.compare("inf") || !input.compare("inff"))
	{
		std::cout << "char:\timpossible\nint:\timpossible\nfloat:\t+inff\ndouble:\t+inf" << std::endl;
		return (true);
	}
	return (false);
}

bool	checkIfChar(std::string input)
{
	if (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]))
		return (true);
	return (false);
}

bool	checkIfInt(std::string input)
{
	size_t	i = 0;
	if (input[0] == '-')
		i++;
	while (i < input.length())
	{
		if (!std::isdigit(input[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	checkIfFloat(std::string input)
{
	int	i = 0;
	if (input[0] == '-')
		i++;
	while (std::isdigit(input[i]))
		i++;
	if (input[i] != '.')
		return (false);
	i++;
	while (std::isdigit(input[i]))
		i++;
	if (input[i] != 'f' || input[i + 1])
		return (false);
	return (true);
}

bool	checkIfDouble(std::string input)
{
	int	i = 0;
	if (input[0] == '-')
		i++;
	while (std::isdigit(input[i]))
		i++;
	if (input[i] != '.')
		return (false);
	i++;
	while (std::isdigit(input[i]))
		i++;
	if (input[i])
		return (false);
	return (true);
}

int		printChar(char c)
{
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);
	std::cout << std::setw(8) << std::left << "char: " << "\'" << c << "\'" << std::endl;
	std::cout << std::setw(8) << std::left << "int: " << i << std::endl;
	std::cout << std::setw(8) << std::left << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << std::setw(8) << std::left << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	return (0);
}

int		printInt(std::string input)
{
	char	c;
	int		i;
	float	f;
	double d = std::stod(input);
	if (d < 32 || d > 127)
		std::cout << std::setw(8) << std::left << "char: " << "impossible" << std::endl;
	else
	{
		c = static_cast<char>(d);
		std::cout << std::setw(8) << std::left << "char: " << "\'" << c << "\'" << std::endl;
	}
	if (d < INT32_MIN || d > INT32_MAX)
		std::cout << std::setw(8) << std::left << "int: " << "impossible" << std::endl;
	else
	{
		i = static_cast<int>(d);
		std::cout << std::setw(8) << std::left << "int: " << i << std::endl;			
	}
	f = static_cast<float>(d);
	std::cout << std::setw(8) << std::left << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << std::setw(8) << std::left << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	return (0);
}

int		printFloat(std::string input)
{
	char	c;
	int		i;
	double	d;
	float f = std::stof(input);
	if (std::floor(f) == f)
		return (printInt(input));
	if (f < 32 || f > 127)
		std::cout << std::setw(8) << std::left << "char: " << "impossible" << std::endl;
	else
	{
		c = static_cast<char>(f);
		std::cout << std::setw(8) << std::left << "char: " << "\'" << c << "\'" << std::endl;
	}
	if (f < INT32_MIN || std::floor(f) > INT32_MAX)
		std::cout << std::setw(8) << std::left << "int: " << "impossible" << std::endl;
	else
	{
		i = static_cast<int>(f);
		std::cout << std::setw(8) << std::left << "int: " << i << std::endl;
	}
	d = static_cast<double>(f);
	std::cout << std::setw(8) << std::left << "float: " << std::fixed << f << "f" << std::endl;
	std::cout << std::setw(8) << std::left << "double: " << std::fixed << d << std::endl;
	return (0);
}

int		printDouble(std::string input)
{
	char	c;
	int		i;
	float	f;
	double d = std::stod(input);
	if (std::floor(d) == d)
		return (printInt(input));
	if (d < 32 || d > 127)
		std::cout << std::setw(8) << std::left << "char: " << "impossible" << std::endl;
	else
	{
		c = static_cast<char>(d);
		std::cout << std::setw(8) << std::left << "char: " << "\'" << c << "\'" << std::endl;
	}
	if (d < INT32_MIN || std::floor(d) > INT32_MAX)
		std::cout << std::setw(8) << std::left << "int: " << "impossible" << std::endl;
	else
	{
		i = static_cast<int>(d);
		std::cout << std::setw(8) << std::left << "int: " << i << std::endl;			
	}
	f = static_cast<float>(d);
	std::cout << std::setw(8) << std::left << "float: " << std::fixed << f << "f" << std::endl;
	std::cout << std::setw(8) << std::left << "double: " << std::fixed << d << std::endl;
	return (0);
}

int		printOther(void)
{
	std::cout << "char:\timpossible\nint:\timpossible\nfloat:\timpossible\ndouble:\timpossible" << std::endl;
	return (0);
}

int		getType(std::string input)
{
	if (checkIfChar(input))
		return (type_char);
	if (checkIfInt(input))
		return (type_int);
	if (checkIfFloat(input))
		return (type_float);
	if (checkIfDouble(input))
		return (type_double);
	return (type_other);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "wrong number of arguments, please enter exactly one argument" << std::endl;
		return (1);
	}

	std::string input = av[1];
	if (others(input))
		return (0);
	// std::cout << std::setw(20) << std::left << "checking if char: " << (checkIfChar(input) ? "yes" : "no") << std::endl;
	// std::cout << std::setw(20) << std::left << "checking if int: " << (checkIfInt(input) ? "yes" : "no") << std::endl;
	// std::cout << std::setw(20) << std::left << "checking if float: " << (checkIfFloat(input) ? "yes" : "no") << std::endl;
	// std::cout << std::setw(20) << std::left << "checking if double: " << (checkIfDouble(input) ? "yes" : "no") << std::endl;
	switch(getType(input))
	{
		case type_char :
			return (printChar(input[0]));
		case type_int :
			return (printInt(input));
		case type_float :
			return (printFloat(input));
		case type_double :
			return (printDouble(input));
		case type_other :
			return (printOther());
	}
	return (0);
}
