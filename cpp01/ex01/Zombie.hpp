/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 09:16:31 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/08 09:16:31 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie
{
private:
	std::string name;

public:
	Zombie(void);
	Zombie(const Zombie &other);
	Zombie &operator=(const Zombie &other);
	~Zombie(void);

	/**
	 * @brief A setter for the name of the zombie.
	 */
	void	setName(std::string newName);

	/**
	 * @brief A getter for the name of the zombie.
	 */
	std::string	getName(void);

	/**
	 * @brief A zombie scream !
	 */
	void	announce(void);
};

/**
 * @brief Create a zombie horde.
 */
Zombie	*zombieHorde(int N, std::string name);

#endif
