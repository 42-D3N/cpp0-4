/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:12:05 by tle-pape          #+#    #+#             */
/*   Updated: 2025/11/20 11:12:05 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void)
	: Animal("Dog"), type("Dog"), sound("Waf Waf")
{
	std::cout << "[\e[4m" << type << "\e[0m] (Dog) created." << std::endl;
}

Dog::Dog(const Dog &other)
	: Animal()
{
	this->type = other.getType();
	this->sound = other.sound;
	std::cout << "[\e[4m" << type << "\e[0m] copy constructor (Dog) called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "[\e[4m" << type << "\e[0m] copy assignation (Dog) called." << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "[\e[4m" << type << "\e[0m] (Dog) destroyed." << std::endl;
}

Dog::Dog(std::string const &animal_type)
	: Animal(animal_type), type("Dog"), sound("Waf Waf")
{
	std::cout << "[\e[4m" << type << "\e[0m] (Dog) created." << std::endl;
}

void	Dog::setType(const std::string &animal_type)
{
	this->type = animal_type;
}

std::string const	&Dog::getType(void) const
{
	return (type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Animal [" << type << "] goes [" << sound << "]" << std::endl;
}
