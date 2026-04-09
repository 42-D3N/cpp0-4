/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:37:21 by tle-pape          #+#    #+#             */
/*   Updated: 2025/08/26 14:37:23 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <sstream>
# include <iostream>
# include "Contact.hpp"

# define CLEAR "\e[3J\e[H\e[J"
# define INDEX "Enter index from 1 to 8 or 0 to exit."
# define S_INDEX "Please enter index : "

class PhoneBook
{
	int		count;
	Contact contacts[8];

	/**
	 * @brief Used to display a prompt to select an index and display it.
	 * 
	 * Give an error if index is not valid (Out of range)
	 */
	void	select();
public:
	PhoneBook(void);
	PhoneBook(const PhoneBook &other);
	PhoneBook &operator=(const PhoneBook &other);
	~PhoneBook(void);

	/**
	 * @brief Get the first empty contact.
	 * 
	 * Get the oldest if list of contacts is full.
	 */
	Contact	&getContact();

	/**
	 * @brief Display all existing contacts.
	 */
	void	displayContacts();

	/**
	 * @brief Display a table of contacts and call select().
	 */
	void	displayTabAndSelect();

};

#endif
