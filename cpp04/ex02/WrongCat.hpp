#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
	std::string	type;

public:
	WrongCat(void);
	WrongCat const	&operator=(WrongCat const &other);
	WrongCat(WrongCat const &other);
	~WrongCat(void);

	WrongCat(std::string const &animal_type);

	std::string const	&getType(void) const;
	void				setType(std::string const &animal_type);
};