/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 16:15:36 by jbennink      #+#    #+#                 */
/*   Updated: 2020/08/05 17:40:55 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "please provide a file and two strings" << std::endl;
		return (1);
	}
	std::ifstream	ifs(av[1]);
	if (!ifs)
	{
		std::cout << "please provide a valid file" << std::endl;
		return (1);
	}
	std::string	toReplace = av[2];
	std::string	replaceWith = av[3];
	std::cout << "replacing " << toReplace << " with " << replaceWith << std::endl;
	std::string name = av[1];
	name += ".replace";
	std::ofstream	ofs(name);
	std::string		content((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
	std::size_t found = 0;
	int	pos = 0;
	while (1)
	{
		found = content.find(av[2], pos);
		if (found == content.npos || found > content.length())
			break ;
		content.replace(found, toReplace.length(), replaceWith);
		pos = found + replaceWith.length();
	}
	ofs << content;
	ifs.close();
	ofs.close();
	return (0);
}
