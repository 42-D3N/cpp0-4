/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:08:31 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/09 16:08:31 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void) : name(""), weapon(NULL)
{}

HumanA::HumanA(const HumanA &other)
{
	name = other.name;
	if (other.weapon != NULL)
		weapon = other.weapon;
	else
		weapon = NULL;
}

HumanA &HumanA::operator=(const HumanA &other)
{
	if (this != &other)
	{
		name = other.name;
		if (other.weapon != NULL)
			weapon = other.weapon;
		else
			weapon = NULL;
	}
	return (*this);
}

HumanA::~HumanA(void)
{
	if (name == "")
		std::cout << "[nameless chara.]" << DESTROYED << std::endl;
	else
		std::cout << name << DESTROYED << std::endl;
	name = "";
	weapon = NULL;
}

HumanA::HumanA(std::string newName, Weapon &newWeapon) \
	: name(newName), weapon(&newWeapon)
{}

void	HumanA::attack(void)
{
	if (name == "" || weapon == NULL || weapon->getType() == "")
		std::cout << NONE << std::endl;
	else
		std::cout << name << ATK << weapon->getType() << std::endl;
}
