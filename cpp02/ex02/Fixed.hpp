/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:08:35 by tle-pape          #+#    #+#             */
/*   Updated: 2025/10/08 15:08:35 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define DEFAULT_CONSTRUCTOR "Default constructor called"
# define INT_CONSTRUCTOR "Int constructor called"
# define FLOAT_CONSTRUCTOR "Float constructor called"
# define COPY_CONSTRUCTOR "Copy constructor called"
# define COPY_ASSIGNMENT "Copy assignment operator called"
# define DESTRUCTOR "Destructor called"
# define GETTER "getRawBits member function called"
# define SETTER "setRawBits member function called"

class Fixed
{
private:
	static const int	fract = 8;
	int					fixed_val;

public:
	Fixed(void);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed(void);
	
	/**
	 * @brief A constructor that takes and convert an int into a 
	 * fixed-point value.
	 */
	Fixed(const int val);

	/**
	 * @brief A constructor that takes and convert an float into a 
	 * fixed-point value.
	 */
	Fixed(const float val);

	/**
	 * @brief Member function that returns the raw value of fixed-point value.
	 */
	int		getRawBits(void) const;

	/**
	 * @brief Member function that sets the raw value of the fixed-point number.
	 */
	void	setRawBits(int const raw);

	/**
	 * @brief A function that return a converted version in float of the
	 * fixed-point number.
	 */
	float	toFloat(void) const;

	/**
	 * @brief A function that return a converted version in int of the
	 * fixed-point number.
	 */
	int		toInt(void) const;

/* List of all operators */

	bool	operator>(Fixed fixed)const;
	bool	operator<(Fixed fixed)const;
	bool	operator>=(Fixed fixed)const;
	bool	operator<=(Fixed fixed)const;
	bool	operator==(Fixed fixed)const;
	bool	operator!=(Fixed fixed)const;
	float	operator+(Fixed fixed)const;
	float	operator-(Fixed fixed)const;
	float	operator*(Fixed fixed)const;
	float	operator/(Fixed fixed)const;
	Fixed	operator++(void);
	Fixed	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed &min(Fixed &first, Fixed &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &min(Fixed const &first, const Fixed &second);
	static const Fixed &max(Fixed const &first, const Fixed &second);
};

/**
 * @brief Operator that handle stream.
 */
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif
