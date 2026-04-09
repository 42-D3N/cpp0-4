/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 06:15:34 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/15 06:15:34 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRREPLACE_HPP
# define STRREPLACE_HPP

# include <iostream>
# include <fstream>

# define ERROPEN "Error while opening file.\nAborting..."

class StrReplace
{
private:
	std::ifstream	file;
	std::string		filename;
	std::string		original;
	std::string		c_to_find;
	std::string		c_to_insert;
	std::string		replaced;

public:
	StrReplace(void);
	StrReplace(const StrReplace &other);
	StrReplace &operator=(const StrReplace &other);
	~StrReplace(void);

	/**
	 * @brief Contructor with 3 params
	 * 
	 * @param  fname The filename
	 * 
	 * @param  to_find The string that will be replaced
	 * 
	 * @param  to_insert The string that will be used to replace `to_find`
	 */
	StrReplace(std::string fname, std::string to_find, std::string to_insert);

	/**
	 * @brief Get the state of file.
	 * 
	 * @return If `true`, file has been opened, `false` otherwise..
	 * 
	 */
	bool	isOpen();

	/**
	 * @brief Replace will find and replace a part of given file.
	 * 
	 * It will create a new file named `filename`.replace with modifications.
	 * 
	 * @return Return `true` if no error, `false` otherwise.
	 */
	bool	replace();
};

#endif
