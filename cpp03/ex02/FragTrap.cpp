/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:08:36 by tle-pape          #+#    #+#             */
/*   Updated: 2025/11/19 16:08:36 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << DEFAULT_CONSTRUCTOR << " (FragTrap) : [" << name << "] !" <<std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
	: ClapTrap(other)
{
	this->hit_points = 100;
	this->attack_damage = 30;
	this->energy_points = 100;
	std::cout << COPY_CONSTRUCTOR << " (FragTrap) : [" << name << "] !" <<std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	std::cout << COPY_ASSIGNMENT << " (FragTrap) : [" << name << "] !" <<std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << DESTRUCTOR << " (FragTrap) : [" << name << "] !" <<std::endl;
}

FragTrap::FragTrap(const std::string name)
	: ClapTrap(name, 100, 100, 30)
{
	std::cout << DEFAULT_CONSTRUCTOR << " (FragTrap) : [" << name << "] !" <<std::endl;
}

void	FragTrap::attack(const std::string& target)
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
			<< damage_type[i] <<"\e[0m damage to eradicate everything !" << std::endl;
	else
		std::cout << "\e[4m" << name << "\e[0m attacks \e[4m" << target \
			<< "\e[0m, causing \e[4m" << attack_damage << "\e[0m points of \e[4m" \
			<< damage_type[i] <<"\e[0m damage to eradicate everything !" << std::endl;
	energy_points--;
}

void	FragTrap::highFivesGuys(void)
{
	if (hit_points == 0)
	{
		std::cout << "\e[4m" << name << "\e[0m can't act, he's dead." 
			<< std::endl;
		return ;
	}
	std::cout << "(\e[4m" << name << "\e[0m) : You've earned it." << std::endl;
}
