/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:57:39 by tle-pape          #+#    #+#             */
/*   Updated: 2025/12/03 14:57:39 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string	ideas[100];

public:
	Brain(void);
	Brain(Brain const &other);
	Brain const	&operator=(Brain const &other);
	~Brain(void);

	std::string const	&getIdea(int const &index) const;
	void				setIdea(std::string const &idea, int const &index);
};

#endif
