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

public:
	Dog(void);
	Dog(Dog const &other);
	Dog &operator=(Dog const &other);
	~Dog(void);
	Dog(std::string const &animal_type);

	std::string const	&getType(void) const;
	void				setType(std::string const &animal_type);

	void	makeSound(void) const;
};

#endif
