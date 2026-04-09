/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:08:31 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/09 16:08:31 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

# define ATK " attacks with their "
# define NONE "This character is nameless or don't have any weapon !"
# define DESTROYED " has been destroyed..."

class HumanA
{
private:
	std::string	name;
	Weapon	*weapon;

public:
	HumanA(void);
	HumanA(const HumanA &other);
	HumanA &operator=(const HumanA &other);
	~HumanA(void);
	HumanA(std::string newName, Weapon &newWeapon);

	/**
	 * @brief attack() will display a message with name and weapon type.
	 */
	void	attack(void);
};

#endif
