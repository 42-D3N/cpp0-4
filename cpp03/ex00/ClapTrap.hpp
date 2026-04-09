/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:40:49 by tle-pape          #+#    #+#             */
/*   Updated: 2025/11/17 10:40:49 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

# define DEFAULT_CONSTRUCTOR "Default constructor called"
# define COPY_CONSTRUCTOR "Copy constructor called"
# define COPY_ASSIGNMENT "Copy assignment operator called"
# define DESTRUCTOR "Destructor called"

class ClapTrap
{
private:
	std::string		name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	int				attack_damage;

public:
	ClapTrap(void);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap(void);
	ClapTrap(const std::string name);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
