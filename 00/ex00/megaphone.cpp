/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:25:18 by dimioui           #+#    #+#             */
/*   Updated: 2022/05/20 13:19:08 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char const **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
			{
				for (int j = 0; j < av[i][j]; j++)
					std::cout << (char)std::toupper(av[i][j]);
				std::cout << ' ';
			}
			std::cout << std::endl;
	}
	return (0);
}

