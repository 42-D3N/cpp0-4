/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:12:05 by tle-pape          #+#    #+#             */
/*   Updated: 2025/11/20 11:12:05 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal
{
private:
	std::string	type;
	std::string	sound;
	Brain		*brain;

public:
	Dog(void);
	Dog(Dog const &other);
	Dog const &operator=(Dog const &other);
	~Dog(void);
	Dog(std::string const &animal_type);

	std::string const	&getType(void) const;
	void				setType(std::string const &animal_type);
	Brain				&getBrain(void) const;
	void				setBrain(Brain const &animal_brain);

	void				makeSound(void) const;
};

#endif
