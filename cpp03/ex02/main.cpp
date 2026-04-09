/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:08:35 by tle-pape          #+#    #+#             */
/*   Updated: 2025/10/08 15:08:35 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	frag(void)
{
	FragTrap	red("Fr4g-TP");

	FragTrap	blue(red);
	FragTrap	green;

	green = blue;
	green.attack("a demon only cats can see");
	std::cout << "atk no" << 1 << " ";
	red.attack("Stairs");
	for (int i = 0 ; i < 98 ; i++)
	{
		std::cout << "atk no" << i + 2 << " ";
		red.attack("ATK");
		std::cout << "atk no" << i << " ";
		blue.attack("ATK");
	}
	blue.highFivesGuys();
	blue.attack("ouais");
	blue.attack("ouais");
	blue.attack("ouais");
	red.highFivesGuys();
	red.takeDamage(99);
	red.beRepaired(10);
	red.takeDamage(5);
	red.beRepaired(3);
	red.takeDamage(8);
	red.attack("fake target");
	red.highFivesGuys();
	red.takeDamage(1);
	red.beRepaired(1);
}

void	clap(void)
{
	ClapTrap yellow("CL4P-TP");

	ClapTrap red(yellow);
	ClapTrap green;
	green = red;

	yellow.attack("stairs");
	yellow.attack("master");
	yellow.attack("his own weapon");
	yellow.attack("floor");
	yellow.attack("stairs");
	yellow.attack("air");
	yellow.attack("itself");
	yellow.takeDamage(0);
	yellow.attack("hyperion door");
	yellow.takeDamage(4);
	yellow.attack("stairs");
	yellow.takeDamage(5);
	yellow.beRepaired(3);
	yellow.attack("stairs");
	yellow.takeDamage(3);
	yellow.takeDamage(10);
	yellow.takeDamage(10);
	yellow.beRepaired(3);
	yellow.attack("stairs");

	red.attack("his own motherless board");
	green.attack("");
}

void	scav(void) 
{
	ScavTrap	red("Sc4v-TP");

	ScavTrap	blue(red);
	ScavTrap	green;

	green = blue;
	green.attack("a demon only cats can see");
	std::cout << "atk no" << 1 << " ";
	red.attack("Stairs");
	for (int i = 0 ; i < 48 ; i++)
	{
		std::cout << "atk no" << i + 2 << " ";
		red.attack("ATK");
		std::cout << "atk no" << i << " ";
		blue.attack("ATK");
	}
	blue.guardGate();
	blue.attack("ouais");
	blue.attack("ouais");
	blue.attack("ouais");
	red.guardGate();
	red.takeDamage(99);
	red.beRepaired(10);
	red.takeDamage(5);
	red.beRepaired(3);
	red.takeDamage(8);
	red.attack("fake target");
	red.guardGate();
	red.takeDamage(1);
	red.beRepaired(1);
}

int	main(void) 
{
	std::cout << "Tests for Cl4p-TP" << std::endl << std::endl;
	clap();
	std::cout << std::endl << std::endl << "Tests for Sc4v-TP" << std::endl << std::endl;
	scav();
	std::cout << std::endl << std::endl << "Tests for Fr4g-TP" << std::endl << std::endl;
	frag();
}
