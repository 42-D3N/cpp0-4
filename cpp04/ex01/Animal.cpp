/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:12:00 by tle-pape          #+#    #+#             */
/*   Updated: 2025/11/20 11:12:00 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
	: type("placeholder"), sound("WTF IS HAPPENING RIGHT NOW ?!")
{
	std::cout << "[\e[4m" << type << "\e[0m] (Animal) created (default)." << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->type = other.getType();
	this->sound = other.sound;
	std::cout << "[\e[4m" << type << "\e[0m] copy constructor (Animal) called." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.getType();
		this->sound = other.sound;
	}
	std::cout << "[\e[4m" << type << "\e[0m] copy assignation (Animal) called." << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "[\e[4m" << type << "\e[0m] (Animal) destroyed." << std::endl;
}

Animal::Animal(std::string const &type_name)
	: type(type_name), sound("WTF IS HAPPENING RIGHT NOW ?!")
{
	std::cout << "[\e[4m" << type << "\e[0m] (Animal) created." << std::endl;
}

void	Animal::setType(const std::string &animal_type)
{
	this->type = animal_type;
}

std::string const	&Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal [" << type << "] goes [" << sound << "]" << std::endl;
}
