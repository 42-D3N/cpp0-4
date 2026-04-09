/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 09:16:31 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/08 09:16:31 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : name("")
{}

Zombie::Zombie(const Zombie &other)
{
	name = other.name;
}

Zombie &Zombie::operator=(const Zombie &other)
{
	if (this != &other)
		name = other.name;
	return (*this);
}

Zombie::~Zombie(void)
{
	std::cout << name << " has been destroyed..." << std::endl;
	name = "";
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
