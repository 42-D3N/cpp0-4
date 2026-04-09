/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:52:18 by tle-pape          #+#    #+#             */
/*   Updated: 2025/11/17 15:52:18 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << DEFAULT_CONSTRUCTOR << " (ScavTrap) : [" << name << "] !" <<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
	: ClapTrap(other)
{
	this->hit_points = 100;
	this->attack_damage = 20;
	this->energy_points = 50;
	std::cout << COPY_CONSTRUCTOR << " (ScavTrap) : [" << name << "] !" <<std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	std::cout << COPY_ASSIGNMENT << " (ScavTrap) : [" << name << "] !" <<std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << DESTRUCTOR << " (ScavTrap) : [" << name << "] !" <<std::endl;
}

ScavTrap::ScavTrap(const std::string name)
	: ClapTrap(name, 100, 50, 20)
{
	std::cout << DEFAULT_CONSTRUCTOR << " (ScavTrap) : [" << name << "] !" <<std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	static int	offset = 0;
	std::srand(time(NULL) + offset++);
	int i = rand() % 7;
	std::string damage_type[8] =
	{
		"incendiary",
		"corrosive",
		"electric",
		"explosive",
		"slag",
		"normal",
		"cryo",
		"radiation"
	};

	if (hit_points == 0)
	{
		std::cout << "\e[4m" << name << "\e[0m can't act, he's dead." 
			<< std::endl;
		return ;
	}
	if (energy_points == 0)
	{
		std::cout << "\e[4m" << name << "\e[0m has no energy points." 
			<< std::endl;
		return ;
	}
	if (target == "")
		std::cout << "\e[4m" << name << "\e[0m attacks \e[4m[placeholder]" \
			<< "\e[0m, causing \e[4m" << attack_damage << "\e[0m points of \e[4m" \
			<< damage_type[i] <<"\e[0m damage to scavenge pieces !" << std::endl;
	else
		std::cout << "\e[4m" << name << "\e[0m attacks \e[4m" << target \
			<< "\e[0m, causing \e[4m" << attack_damage << "\e[0m points of \e[4m" \
			<< damage_type[i] <<"\e[0m damage to scavenge pieces !" << std::endl;
	energy_points--;
}

void	ScavTrap::guardGate(void)
{
	if (hit_points == 0)
	{
		std::cout << "\e[4m" << name << "\e[0m can't act, he's dead." 
			<< std::endl;
		return ;
	}
	std::cout << "\e[4m" << name << "\e[0m is now in Guard mode." << std::endl;
}
