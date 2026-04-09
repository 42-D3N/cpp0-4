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

# define DEFAULT_CONSTRUCTOR "Default constructor called"
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
	 * @brief Member function that returns the raw value of fixed-point value.
	 */
	int		getRawBits(void) const;

	/**
	 * @brief Member function that sets the raw value of the fixed-point number.
	 */
	void	setRawBits(int const raw);
};

#endif
