/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:57:39 by tle-pape          #+#    #+#             */
/*   Updated: 2025/12/03 14:57:39 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created with default constructor." << std::endl;
}

Brain::Brain(Brain const &other)
{
	*this = other;
	std::cout << "Brain copied." << std::endl;
}

Brain const	&Brain::operator=(Brain const &other)
{
	std::cout << "Assignment operator for Brain called." << std::endl;
	if (this != &other)
	{
		std::copy(other.ideas, other.ideas + 100, ideas);
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed." << std::endl;
}

std::string const	&Brain::getIdea(int const &index) const
{
	if (index >= 0 && index < 100)
		return (ideas[index]);
	return (ideas[0]);
}

void	Brain::setIdea(std::string const &idea, int const &index)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}
