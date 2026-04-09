/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:08:51 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/09 16:08:51 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon(void) : type("")
{}

Weapon::Weapon(const Weapon &other)
{
	type = other.type;
}

Weapon &Weapon::operator=(const Weapon &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Weapon::~Weapon(void)
{
	if (type == "")
		std::cout << "[nameless weapon]" << DESTROYED << std::endl;
	else
		std::cout << type << DESTROYED << std::endl;
	type = "";
}

Weapon::Weapon(std::string weaponName)
{
	type = weaponName;
}

std::string	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}

