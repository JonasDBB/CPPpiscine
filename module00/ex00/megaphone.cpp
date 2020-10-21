/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 11:13:54 by jbennink      #+#    #+#                 */
/*   Updated: 2020/07/27 11:42:14 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			av[i][j] = toupper(av[i][j]);
			j++;
		}
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
