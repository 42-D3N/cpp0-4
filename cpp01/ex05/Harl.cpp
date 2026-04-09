/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 07:00:47 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/16 07:00:47 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{}

Harl::Harl(const Harl &other)
{
	(void)other;
}

Harl &Harl::operator=(const Harl &other)
{
	(void)other;
	return (*this);
}

Harl::~Harl(void)
{}

void	Harl::debug(void)
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	void		(Harl::*functions[4])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			break;
		}
		else if (i == 3)
			std::cout << "Message not found : [" << level << "]" << std::endl;
	}
}


