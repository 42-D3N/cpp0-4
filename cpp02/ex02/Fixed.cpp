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

float	Fixed::toFloat(void)const
{
	return ((float)this->fixed_val / (float)(1 << this->fract));
}

int	Fixed::toInt(void)const
{
	return (this->fixed_val >> this->fract);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() > second.toFloat())
		return (first);
	return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() > second.toFloat())
		return (first);
	return (second);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed fixed) const
{
	return (toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (toFloat() != fixed.toFloat());
}

float	Fixed::operator+(Fixed fixed) const
{
	return (toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++(void)
{
	fixed_val++;
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	fixed_val--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++fixed_val;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	--fixed_val;
	return (tmp);
}
