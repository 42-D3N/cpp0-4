/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 07:00:47 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/16 07:00:47 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define DEBUG "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define INFO "I cannot believe adding extra bacon costs more money. \
You didn't put enough bacon in my burger! \
If you did, I wouldn't be asking for more!"
# define WARNING "I think I deserve to have some extra bacon for free. \
I've been coming for years, whereas you started working here just last month."
# define ERROR "This is unacceptable! I want to speak to the manager now."

class Harl
{
private:
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);

public:
	Harl(void);
	Harl(const Harl &other);
	Harl &operator=(const Harl &other);
	~Harl(void);

	/**
	 * @brief complain take the level of complain as argument.
	 * 
	 * It print the corresponding complain level.
	 */
	void	complain(std::string level);
};

#endif
