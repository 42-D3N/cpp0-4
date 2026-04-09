#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &other);
	WrongAnimal const	&operator=(WrongAnimal const &other);
	virtual ~WrongAnimal(void);

	WrongAnimal(std::string const &animal_type);

	std::string const	&getType(void) const;
	void				setType(std::string const &animal_type);
	void				makeSound(void) const;
};
