/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:37:26 by tle-pape          #+#    #+#             */
/*   Updated: 2025/08/26 14:37:29 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

// Define first TAB line
# define TAB_FIRST_LINE "┌──────────┬──────────┬──────────┬──────────┐\n\
│     index│First name│ Last name│  Nickname│\n\
├──────────┼──────────┼──────────┼──────────┤"
# define TAB_LINE_PART "│"
# define TAB_LAST_LINE "└──────────┴──────────┴──────────┴──────────┘"

// Define all 5 strings when adding a contact
# define F_NAME "Enter your first name : "
# define L_NAME "Enter your last name : "
# define N_NAME "Enter your nickname : "
# define NUMBER "Enter your phone number : "
# define SECRET "Enter your darkest secret : "

class Contact
{
	std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	number;
	std::string	secret;
public:
	Contact(void);
	Contact(const Contact &other);
	Contact &operator=(const Contact &other);
	~Contact(void);

	/**
	 * @brief Get a field depending of the param
	 * 
	 * @param field need to contain one of the 5 existing fields :
	 * 
	 * - f_name -> First name field.
	 * 
	 * - l_name -> Last name field.
	 * 
	 * - n_name -> Nickname field.
	 * 
	 * - number -> Phone number field.
	 * 
	 * - secret -> Darkest secret field.
	 */
	std::string	getField(std::string field);

	/**
	 * @brief Set a new contact on empty (or used if list is full) contact.
	 * 
	 * This method doesn't take argument.
	 * 
	 * It only fill content by using std::getString().
	 */
	void	setNewContact();

	/**
	 * @brief Display the content of a contact.
	 */
	void	displayContact();
};

#endif
