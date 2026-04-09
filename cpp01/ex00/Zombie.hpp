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
	 * @brief Set the name of the zombie
	 */
	void	setName(std::string newName);

	/**
	 * @brief A zombie scream !
	 */
	void	announce(void);
};

/**
 * @brief Create a zombie allocated on the stack and call announce().
 */
void	randomChump(std::string name);

/**
 * @brief Create and return a zombie allocated on the heap.
 */
Zombie	*newZombie(std::string name);

#endif
