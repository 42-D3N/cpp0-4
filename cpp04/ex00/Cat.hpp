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

class Cat: public Animal
{
private:
	std::string	type;
	std::string	sound;

public:
	Cat(void);
	Cat(Cat const &other);
	Cat &operator=(Cat const &other);
	~Cat(void);
	Cat(std::string const &animal_type);

	std::string const	&getType(void) const;
	void				setType(std::string const &animal_type);

	void	makeSound(void) const;
};

#endif
