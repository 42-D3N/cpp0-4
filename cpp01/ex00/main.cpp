/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-09 05:16:05 by tle-pape          #+#    #+#             */
/*   Updated: 2025-09-09 05:16:05 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *single = NULL;

	single = newZombie("Zomba");
	single->announce();
	randomChump("Zombue");
	delete (single);
}
