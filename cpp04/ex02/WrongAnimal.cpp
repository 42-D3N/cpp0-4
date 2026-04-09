#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
	: type("placeholder")
{
	std::cout << "[\e[4m" << type << "\e[0m] (WrongAnimal) created (default)." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	type = other.type;
	std::cout << "[\e[4m" << type << "\e[0m] copy constructor (WrongAnimal) called." << std::endl;
}

WrongAnimal const	&WrongAnimal::operator=(WrongAnimal const &other)
{
	if (this != &other)
	{
		type = other.getType();
	}
	std::cout << "[\e[4m" << type << "\e[0m] copy assignation (WrongAnimal) called." << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[\e[4m" << type << "\e[0m] (WrongAnimal) destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &animal_type)
	: type(animal_type)
{
	std::cout << "[\e[4m" << type << "\e[0m] (WrongAnimal) created." << std::endl;
}

std::string const	&WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::setType(const std::string &animal_type)
{
	type = animal_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Animal [" << type << "] goes [what a wrong animal goes I guess ?]" << std::endl;
}
