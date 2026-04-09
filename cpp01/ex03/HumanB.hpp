/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:08:33 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/09 16:08:33 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>

# include "Weapon.hpp"

# define ATK " attacks with their "
# define NONE "This character is nameless or don't have any weapon !"
# define DESTROYED " has been destroyed..."
# define ZOTE "Invincible fearless sensual mysterious enchanting vigorous \
diligent overwhelming gorgeous passionate terrifying beautiful powerful \
grey prince Zote"


class HumanB
{
private:
	std::string	name;
	Weapon	*weapon;

public:
	HumanB(void);
	HumanB(const HumanB &other);
	HumanB &operator=(const HumanB &other);
	~HumanB(void);
	HumanB(std::string newName);

	/**
	 * @brief attack() will display a message with name and weapon type.
	 */
	void	attack(void);

	/**
	 * @brief Replace weapon by a new one passed in parameter.
	 */
	void	setWeapon(Weapon &newWeapon);
};

#endif
