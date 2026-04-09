#include "WrongCat.hpp"

WrongCat::WrongCat(void): type("WrongCat")
{
	std::cout << "[\e[4m" << type << "\e[0m] (WrongCat) created." << std::endl;
}

WrongCat::WrongCat(WrongCat const &other)
	: WrongAnimal(other)
{
	this->type = other.getType();
	std::cout << "[\e[4m" << type << "\e[0m] copy constructor (Cat) called." << std::endl;
}

WrongCat const	&WrongCat::operator=(WrongCat const &other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	std::cout << "[\e[4m" << type << "\e[0m] copy assignation (Cat) called." << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "[\e[4m" << type << "\e[0m] (WrongCat) destroyed." << std::endl;
}

WrongCat::WrongCat(std::string const &animal_type)
	: WrongAnimal(animal_type), type("WrongCat")
{
	std::cout << "WrongCat from WrongAnimal " << WrongAnimal::type << " created." << std::endl;
}

std::string const	&WrongCat::getType(void) const
{
	return (type);
}

void	WrongCat::setType(const std::string &animal_type)
{
	type = animal_type;
}
