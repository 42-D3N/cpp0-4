/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:08:51 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/09 16:08:51 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define DESTROYED " has been destroyed..."

class Weapon
{
private:
	std::string type;

public:
	Weapon(void);
	Weapon(const Weapon &other);
	Weapon &operator=(const Weapon &other);
	~Weapon(void);

	Weapon(std::string weaponName);

	/**
	 * @brief A getter to get type.
	 */
	std::string	getType(void);

	/**
	 * @brief A setter to set the type
	 */
	void		setType(std::string newType);
};

#endif
