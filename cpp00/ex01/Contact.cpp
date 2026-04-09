/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:37:37 by tle-pape          #+#    #+#             */
/*   Updated: 2025/08/26 14:37:41 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	f_name = "";
	l_name = "";
	n_name = "";
	number = "";
	secret = "";
}

Contact::Contact(const Contact &other)
{
	f_name = other.f_name;
	l_name = other.l_name;
	n_name = other.n_name;
	number = other.number;
	secret = other.secret;
}

Contact	&Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		f_name = other.f_name;
		l_name = other.l_name;
		n_name = other.n_name;
		number = other.number;
		secret = other.secret;
	}
	return (*this);
}

Contact::~Contact(void)
{}

std::string	Contact::getField(std::string field)
{
	if (field == "f_name")
		return (f_name);
	else if (field == "l_name")
		return (l_name);
	else if (field == "n_name")
		return (n_name);
	std::cout << "Internal class error." << std::endl;
	return ("");
}

void	Contact::setNewContact()
{
	const std::string	tab[5] = {F_NAME, L_NAME, N_NAME, NUMBER, SECRET};
	std::string		*values[5] = {&f_name, &l_name, &n_name, &number, &secret};

	for (int i = 0 ; i < 5 && !std::cin.eof(); i++)
	{
		std::cout << tab[i];
		std::getline(std::cin, *values[i]);
		if (*values[i] == "")
			i--;
	}
}

void	Contact::displayContact()
{
	std::cout << "First name : " << f_name << std::endl
		<< "Last Name : " << l_name << std::endl
		<< "Nickname : " << n_name << std::endl
		<< "Phone number : " << number << std::endl
		<< "Darkest secret : " << secret << std::endl
		<< std::endl;
}
