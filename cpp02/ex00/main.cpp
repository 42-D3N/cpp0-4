/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:08:35 by tle-pape          #+#    #+#             */
/*   Updated: 2025/10/08 15:08:35 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void	main2()
{
	std::cout << std::endl;
	Fixed x;
	Fixed y;

	std::cout << std::endl;
	x.setRawBits(12);
	std::cout << "x set to 12" << std::endl << std::endl;
	y = x;
	std::cout << "x copied to y" << std::endl << std::endl;
	y.setRawBits(y.getRawBits() + 8);
	std::cout << "y set to y + 8" << std::endl << std::endl;
	std::cout << "Calculating x + y..." << std::endl;
	std::cout << x.getRawBits() + y.getRawBits() << std::endl << std::endl;
}

void	subject_main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

int	main(void) 
{
	std::cout << "Subject main :" << std::endl;
	subject_main();
	std::cout << std::endl << std::endl << "New Tests :" << std::endl;
	main2();
	return (0);
}
