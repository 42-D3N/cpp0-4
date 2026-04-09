/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:12:08 by tle-pape          #+#    #+#             */
/*   Updated: 2025/11/20 11:12:08 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
	: Animal("Cat"), type("Cat"), sound("Meow UwU")
{
	brain = new Brain();
	std::cout << "[\e[4m" << type << "\e[0m] (Cat) created." << std::endl;
}

Cat::Cat(const Cat &other)
	: Animal()
{
	this->brain = new Brain(*other.brain);
	this->type = other.getType();
	this->sound = other.sound;
	std::cout << "[\e[4m" << type << "\e[0m] copy constructor (Cat) called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*this->brain = *other.brain;
	}
	std::cout << "[\e[4m" << type << "\e[0m] copy assignation (Cat) called." << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "[\e[4m" << type << "\e[0m] (Cat) destroyed." << std::endl;
}

Cat::Cat(std::string const &animal_type)
	: Animal(animal_type), type("Cat"), sound("Meow UwU")
{
	brain = new Brain();
	std::cout << "[\e[4m" << type << "\e[0m] (Cat) created." << std::endl;
}

void	Cat::setType(const std::string &animal_type)
{
	this->type = animal_type;
}

std::string const	&Cat::getType(void) const
{
	return (type);
}

Brain	&Cat::getBrain(void) const
{
	return (*this->brain);
}

void	Cat::setBrain(Brain const &animal_brain)
{
	*this->brain = animal_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Animal [" << type << "] goes [" << sound << "]" << std::endl;
}
