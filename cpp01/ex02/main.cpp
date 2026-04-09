/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:09:30 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/09 16:09:32 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of string    : 0x" << &string << std::endl;
	std::cout << "Address of stringPTR : 0x" << &stringPTR << std::endl;
	std::cout << "Address of stringREF : 0x" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of string    : " << string << std::endl;
	std::cout << "Value of stringPTR : 0x" << stringPTR << std::endl;
	std::cout << "Value of stringREF : " << stringREF << std::endl;
}
