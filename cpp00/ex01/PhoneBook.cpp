/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:37:30 by tle-pape          #+#    #+#             */
/*   Updated: 2025/08/26 14:37:33 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	displayLine(std::string field)
{
	size_t		spaces = 0;
	std::string	to_trunc="";

	to_trunc = field;
	spaces = to_trunc.size();
	if (spaces > 10)
	{
		to_trunc.resize(9);
		to_trunc.append(".");
	}
	else
		std::cout << std::string(10 - spaces, ' ');
	std::cout << to_trunc << TAB_LINE_PART;
}

PhoneBook::PhoneBook(void) : count(0)
{}

PhoneBook::PhoneBook(const PhoneBook &other) : count(other.count)
{
	int	i = 0;

	while (i < count)
	{
		contacts[i] = other.contacts[i];
		i++;
	}
}

PhoneBook &PhoneBook::operator=(const PhoneBook& other)
{
	int	i = 0;

	if (this != &other)
	{
		count = other.count;
		while (i < count)
		{
			contacts[i] = other.contacts[i];
			i++;
		}
	}
	return *this;
}

PhoneBook::~PhoneBook(void)
{}

Contact	&PhoneBook::getContact()
{
	static int	i = 0;
	int			index = 0;

	std::cout << CLEAR;
	for (; (i % 8) < 8 ; i++)
	{
		std::cout << i << std::endl;
		if (contacts[i % 8].getField("f_name") == "" || i > 7)
		{
			index = i % 8;
			if (i >= 8)
				i++;
			break;
		}
	}
	return (contacts[index]);
}

void	PhoneBook::displayContacts()
{
	for (int i = 0 ; i < 8 && contacts[i].getField("f_name") != "" ; i++)
		contacts[i].displayContact();
}

void	PhoneBook::displayTabAndSelect()
{
	bool	find = false;

	std::cout << CLEAR;
	for (int i = 0 ; i < 8 && contacts[i].getField("f_name") != "" ; i++)
	{
		if (i == 0)
			std::cout << TAB_FIRST_LINE << std::endl;
		std::cout << TAB_LINE_PART <<"         " << i + 1 << TAB_LINE_PART;
		displayLine(contacts[i].getField("f_name"));
		displayLine(contacts[i].getField("l_name"));
		displayLine(contacts[i].getField("n_name"));
		std::cout << std::endl;
		find = true;
	}
	if (find == false)
		std::cout << "No contact registered" << std::endl << std::endl;
	else
	{
		std::cout << TAB_LAST_LINE << std::endl;
		select();
	}
}

void	PhoneBook::select()
{
	int			index = -1;
	std::string	s_index;

	std::cout << std::endl << std::endl << INDEX << std::endl << S_INDEX;
	std::getline(std::cin, s_index);
	std::cout << std::endl << std::endl;
	for (int i = 0 ; i < 8 ; i++)
	{
		std::stringstream(s_index) >> index;
		if (index == 0)
			break;
		if ((index < 0) || index > 8)
		{
			std::cout << "Error, invalid index." << std::endl;
			break;
		}
		else if (index == i + 1)
		{
			if (contacts[i].getField("f_name") == "")
				std::cout << "Index is not in table" << std::endl;
			else
				contacts[i].displayContact();
			break;
		}
	}
}
