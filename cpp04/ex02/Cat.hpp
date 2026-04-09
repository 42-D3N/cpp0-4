/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:12:08 by tle-pape          #+#    #+#             */
/*   Updated: 2025/11/20 11:12:08 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	std::string	type;
	std::string	sound;
	Brain		*brain;

public:
	Cat(void);
	Cat(Cat const &other);
	Cat &operator=(Cat const &other);
	~Cat(void);
	Cat(std::string const &animal_type);

	std::string const	&getType(void) const;
	void				setType(std::string const &animal_type);
	Brain				&getBrain(void) const;
	void				setBrain(Brain const &animal_brain);

	void	makeSound(void) const;
};

#endif
