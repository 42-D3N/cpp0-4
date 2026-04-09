/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 05:16:05 by tle-pape          #+#    #+#             */
/*   Updated: 2025-09-09 05:16:05 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 7;
	Zombie *horde;

	horde = zombieHorde(N, "Robert");
	for (int i = 0 ; i < N ; i++)
	{
		std::cout << "Zombie (" << i + 1 << ") named " << horde[i].getName() 
			<< " is screaming..."<< std::endl;
		horde[i].announce();
	}
	std::cout << std::endl;
	delete[] horde;
}
