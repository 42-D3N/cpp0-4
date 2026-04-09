/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:12:00 by tle-pape          #+#    #+#             */
/*   Updated: 2025/11/20 11:12:00 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;
		std::string	sound;

	public:
		Animal(void);
		Animal(Animal const &other);
		Animal &operator=(Animal const &other);
		virtual ~Animal(void);
		Animal(std::string const &animal_type);

		std::string const	&getType(void) const;
		void				setType(std::string const &animal_type);

		virtual void	makeSound(void) const;
};

#endif
