/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:08:35 by tle-pape          #+#    #+#             */
/*   Updated: 2025/10/08 15:08:35 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	wrong_subject()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
}

void	wrong_cat(void)
{
	std::cout << "== Test for default constructor ==" << std::endl;
	WrongCat		w_cat_1;
	w_cat_1.makeSound();

	std::cout << std::endl << "== Test for copy constructor ==" << std::endl;
	WrongCat		w_cat_2(w_cat_1);
	w_cat_2.makeSound();

	std::cout << std::endl << "== Test for copy assignation ==" << std::endl;
	WrongCat		w_cat_3;
	w_cat_3 = w_cat_1;
	w_cat_3.makeSound();

	std::cout << std::endl << "== Destructor parts ==" << std::endl;
}

void	wrong_animal(void)
{
	std::cout << "== Test for default constructor ==" << std::endl;
	WrongAnimal	w_animal_1;

	std::cout << std::endl << "== Test for copy constructor ==" << std::endl;
	WrongAnimal	w_animal_2(w_animal_1);

	std::cout << std::endl << "== Test for copy assignation ==" << std::endl;
	WrongAnimal	w_animal_3;
	w_animal_3 = w_animal_1;

	std::cout << std::endl << "== Test for overload constructor ==" << std::endl;
	WrongAnimal	w_animal_4("undefined_type");

	std::cout << std::endl << "== Destructor parts ==" << std::endl;
}

void	dog(void)
{
	std::cout << "== Test for default constructor ==" << std::endl;
	Dog		dog_1;
	dog_1.makeSound();

	std::cout << std::endl << "== Test for copy constructor ==" << std::endl;
	Dog		dog_2(dog_1);
	dog_2.makeSound();

	std::cout << std::endl << "== Test for copy assignation ==" << std::endl;
	Dog		dog_3;
	dog_3 = dog_1;
	dog_3.makeSound();

	std::cout << std::endl << "== Destructor parts ==" << std::endl;
}

void	cat(void)
{
	std::cout << "== Test for default constructor ==" << std::endl;
	Cat		cat_1;
	cat_1.makeSound();

	std::cout << std::endl << "== Test for copy constructor ==" << std::endl;
	Cat		cat_2(cat_1);
	cat_2.makeSound();

	std::cout << std::endl << "== Test for copy assignation ==" << std::endl;
	Cat		cat_3;
	cat_3 = cat_1;
	cat_3.makeSound();

	std::cout << std::endl << "== Destructor parts ==" << std::endl;
}

void	animal(void)
{
	std::cout << "== Test for default constructor ==" << std::endl;
	Animal	animal_1;

	std::cout << std::endl << "== Test for copy constructor ==" << std::endl;
	Animal	animal_2(animal_1);

	std::cout << std::endl << "== Test for copy assignation ==" << std::endl;
	Animal	animal_3;
	animal_3 = animal_1;

	std::cout << std::endl << "== Test for overload constructor ==" << std::endl;
	Animal	animal_4("undefined_type");

	std::cout << std::endl << "== Destructor parts ==" << std::endl;
}

void	subject()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;
}

int	main(void) 
{
	std::cout << "\e[4mTests from the subject\e[0m" << std::endl;
	subject();
	std::cout << std::endl << "\e[4mTests for Animal\e[0m" << std::endl;
	animal();
	std::cout << std::endl << std::endl << "\e[4mTests for Cat :\e[0m" << std::endl;
	cat();
	std::cout << std::endl << std::endl << "\e[4mTests for Dog :\e[0m" << std::endl;
	dog();
	std::cout << std::endl << std::endl << "\e[4mTest wrong animal & cat from the subject\e[0m" << std::endl;
	wrong_subject();
	std::cout << std::endl << "\e[4mTests for WrongAnimal\e[0m" << std::endl;
	wrong_animal();
	std::cout << std::endl << std::endl << "\e[4mTests for WrongCat :\e[0m" << std::endl;
	wrong_cat();
}
