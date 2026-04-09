/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:55:26 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/11 14:55:29 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "StrReplace.hpp"

#define ARGS "Wrong number of arguments.\nUsage : ./string_replace [file] \
	[string_to_replace] [new_string]"
#define NOTEMPTY "String to replace must not be empty !"

/**
 * @brief A function that check errors for arguments.
 */
bool	check_error(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << ARGS << std::endl;
		return (true);
	}
	if (!argv[2][0])
	{
		std::cout << NOTEMPTY << std::endl;
		return (true);
	}
	return (false);
}

int	main(int argc, char **argv)
{
	if (check_error(argc, argv) == true)
		return (1);

	StrReplace	replace(argv[1], argv[2], argv[3]);

	if (replace.isOpen() == 0)
	{
		std::cout << ERROPEN << std::endl;
		return (1);
	}
	replace.replace();
}
