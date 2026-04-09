/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:08:35 by tle-pape          #+#    #+#             */
/*   Updated: 2025/10/08 15:08:35 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
	: fixed_val(0)
{
	std::cout << DEFAULT_CONSTRUCTOR << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << COPY_CONSTRUCTOR << std::endl;
	fixed_val = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << COPY_ASSIGNMENT << std::endl;
	if (this != &other)
	{
		fixed_val = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << DESTRUCTOR << std::endl;
	fixed_val = 0;
}

Fixed::Fixed(const int val)
{
	std::cout << INT_CONSTRUCTOR << std::endl;
	this->fixed_val = val << this->fract;
}

Fixed::Fixed(const float val)
{
	std::cout << FLOAT_CONSTRUCTOR << std::endl;
	this->fixed_val = roundf(val * (1 << this->fract));
}

int	Fixed::getRawBits(void) const
{
	std::cout << GETTER << std::endl;
	return (fixed_val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << SETTER << std::endl;
	fixed_val = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

float	Fixed::toFloat(void)const
{
	return ((float)this->fixed_val / (float)(1 << this->fract));
}

int	Fixed::toInt(void)const
{
	return (this->fixed_val >> this->fract);
}
