/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:40:49 by tle-pape          #+#    #+#             */
/*   Updated: 2025/11/17 10:40:49 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: name("placeholder"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << DEFAULT_CONSTRUCTOR << " (ClapTrap) : [" << name << "] !" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: name(other.name), hit_points(other.hit_points),
	energy_points(other.energy_points), attack_damage(other.attack_damage)
{
	std::cout << COPY_CONSTRUCTOR << " (ClapTrap) : [" << name << "] !" <<std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	std::cout << COPY_ASSIGNMENT << " (ClapTrap) : [" << name << "] !" <<std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << DESTRUCTOR << " (ClapTrap) : [" << name << "] !" <<std::endl;
}

ClapTrap::ClapTrap(const std::string name)
	: name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << DEFAULT_CONSTRUCTOR << " (ClapTrap) : [" << name << "] !" <<std::endl;
}

ClapTrap::ClapTrap(const std::string name, unsigned int hit_points, unsigned int energy_points, int attack_damage)
	: name(name), hit_points(hit_points), energy_points(energy_points), attack_damage(attack_damage)
{
	std::cout << DEFAULT_CONSTRUCTOR << " (ClapTrap) : [" << name << "] !" <<std::endl;
}

void	ClapTrap::attack(const std::string& target)
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
			<< damage_type[i] <<"\e[0m damage!" << std::endl;
	else
		std::cout << "\e[4m" << name << "\e[0m attacks \e[4m" << target \
			<< "\e[0m, causing \e[4m" << attack_damage << "\e[0m points of \e[4m" \
			<< damage_type[i] <<"\e[0m damage!" << std::endl;
	energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << "\e[4m" << name << "\e[0m is already dead !" << std::endl;
		return ;
	}
	else if (amount == 0)
	{
		std::cout << "\e[4m" << name << "\e[0m don't takes any damages !" \
			<< std::endl;
		return ;
	}
	std::cout << "\e[4m" << name << "\e[0m takes \e[4m" \
		<< amount << "\e[0m damages !" << std::endl;
	if (amount > hit_points)
		hit_points = 0;
	else
		hit_points -= amount;
	if (hit_points == 0)
		std::cout << "\e[4m" << name << "\e[0m is out !" << std::endl;
	else
		std::cout << "\e[4m" << name << "\e[0m has only \e[4m" \
			<< hit_points << " HP\e[0m left !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
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
	energy_points--;
	if (amount == 0)
		std::cout << "\e[4m" << name << "\e[0m failed to repair itself."
			<< "He need a repair kit !" << std::endl;
	else
	{
		hit_points += amount;
		std::cout << "\e[4m" << name << "\e[0m repair itself and gain \e[4m"
			<< amount << "\e[0m hit points (now \e[4m" << hit_points
			<< "\e[0m HP)." << std::endl;
	}
}
