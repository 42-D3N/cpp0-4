/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:08:33 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/09 16:08:33 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) : name(""), weapon(NULL)
{}

HumanB::HumanB(const HumanB &other)
{
	name = other.name;
	weapon->setType("None");
}

HumanB &HumanB::operator=(const HumanB &other)
{
	if (this != &other)
	{
		name = other.name;
		weapon->setType("None");
	}
	return (*this);
}

HumanB::~HumanB(void)
{
	if (name == "")
		std::cout << "[nameless chara.]" << DESTROYED << std::endl;
	else
		std::cout << name << DESTROYED << std::endl;
	name = "";
	weapon = NULL;
}

HumanB::HumanB(std::string newName) : name(newName), weapon(NULL)
{}

void	HumanB::attack(void)
{
	if (name == "" || weapon == NULL || weapon->getType() == "")
		std::cout << NONE << std::endl;
	else
		std::cout << name << ATK << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}
