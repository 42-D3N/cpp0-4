/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:29:33 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/09 16:29:34 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	std::cout << std::endl << "\e[4mTests for HumanA :\e[0m" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();

		// New tests
		Weapon nothing = Weapon("");
		HumanA john = HumanA();
		HumanA jack("", nothing);
		HumanA jean("Jean", nothing);
		HumanA jule("", club);
		HumanA joke;
		john.attack();
		jack.attack();
		jean.attack();
		jule.attack();
		joke.attack();
		std::cout << std::endl << "\e[4mDestroy part...\e[0m" << std::endl;
	}
	std::cout << std::endl << "-----------------------------------------------" \
		<< std::endl << std::endl << "\e[4mTests for HumanB :\e[0m" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();

		// New tests
		Weapon nothing = Weapon();
		Weapon le = Weapon("Life Ender");
		HumanB joe("");
		HumanB jae = HumanB();
		HumanB jan("Jan");
		HumanB zote(ZOTE);
		joe.attack();
		jae.attack();
		jan.attack();
		jan.setWeapon(nothing);
		jan.attack();
		jan.setWeapon(club);
		jan.attack();
		zote.setWeapon(le);
		zote.attack();
		std::cout << std::endl << "\e[4mDestroy part...\e[0m" << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
