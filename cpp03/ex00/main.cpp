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

int	main(void) 
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
	yellow.attack("");
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
