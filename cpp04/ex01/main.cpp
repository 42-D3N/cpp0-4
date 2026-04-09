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
#include "Dog.hpp"
#include "Cat.hpp"

void test_subject()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete j;
	delete i;
}

void test_brain_independence()
{
	Dog d1;
	Dog d2;

	d1.getBrain().setIdea("I love bones!", 0);
	d2.getBrain().setIdea("I hate baths!", 0);

	std::cout << "Dog1 idea 0: " << d1.getBrain().getIdea(0) << std::endl;
	std::cout << "Dog2 idea 0: " << d2.getBrain().getIdea(0) << std::endl;
}

void test_deep_copy_constructor()
{
	Cat c1;
	c1.getBrain().setIdea("I want fish", 0);

	Cat c2(c1);

	std::cout << "c1 idea 0: " << c1.getBrain().getIdea(0) << std::endl;
	std::cout << "c2 idea 0: " << c2.getBrain().getIdea(0) << std::endl;

	c2.getBrain().setIdea("I want milk", 0);

	std::cout << "c1 idea 0: " << c1.getBrain().getIdea(0) << std::endl;
	std::cout << "c2 idea 0: " << c2.getBrain().getIdea(0) << std::endl;
}

void test_deep_copy_assignment()
{
	Dog d1;
	d1.getBrain().setIdea("Guard the house", 1);

	Dog d2;
	d2.getBrain().setIdea("Sleep all day", 1);

	d2 = d1;

	std::cout << "d1 idea 1: " << d1.getBrain().getIdea(1) << std::endl;
	std::cout << "d2 idea 1: " << d2.getBrain().getIdea(1) << std::endl;

	d2.getBrain().setIdea("Eat everything", 1);

	std::cout << "d1 idea 1: " << d1.getBrain().getIdea(1) << std::endl;
	std::cout << "d2 idea 1: " << d2.getBrain().getIdea(1) << std::endl;
}

void test_array_animals()
{
	Animal* animals[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\nDeleting animals...\n";
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}
}

int main()
{
	std::cout << std::endl << "=== Tests du sujet ===" << std::endl;
	test_subject();
	std::cout << std::endl << "=== Test d'indépendance des Brain ===" << std::endl;
	test_brain_independence();
	std::cout << std::endl << "=== Test deep copy (constructor) ===" << std::endl;
	test_deep_copy_constructor();
	std::cout << std::endl << "=== Test deep copy (operator=) ===" << std::endl;
	test_deep_copy_assignment();
	std::cout << std::endl << "=== Test tableau d'Animaux ===" << std::endl;
	test_array_animals();

	std::cout << "\n=== END TESTS ===\n";
	return (0);
}
