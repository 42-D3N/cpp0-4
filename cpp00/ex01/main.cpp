/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:37:06 by tle-pape          #+#    #+#             */
/*   Updated: 2025/08/26 14:37:09 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	PhoneBook book;
	std::string command="";

	std::cout << CLEAR << WELCOME << std::endl;
	while (command != "EXIT")
	{
		if (std::cin.eof())
		{
			std::cout << std::endl << EOF_ERROR << std::endl << std::endl;
			break;
		}
		std::cout << ENT;
		std::getline(std::cin,command);
		if (command == "ADD")
			book.getContact().setNewContact();
		else if (command == "SEARCH")
			book.displayTabAndSelect();
		else if (command != "" && command != "EXIT")
			std::cout << INV_CMD << std::endl;
	}
	std::cout << EXIT << std::endl;
	if (std::cin.eof())
		return (1);
	return (0);
}

/* Here a 4th command that clear terminal on demand. Add it between SEARCH and ADD
		else if (command == "CLEAR")
			std::cout << CLEAR;
-----------------------------------------------------
Here a list of contacts to CTRL+V in terminal
./my_awesome_phonebook << EOF
ADD
Thomas
Le Pape
D3N
0123456789
It's a secret for everybody
ADD
Raphael
Destruhaut
rapo_
9876543210
Nah you will not know
ADD
Random
Bullshit
Go
0741852963
random.org
ADD
a
a
a
a
a
ADD
1
1
1
1
1
ADD
Alex
Mora
Capt'n
0147258369
Streame sur twitch en vrai (écrit par tchampio)
ADD
Sullivan
King
Someone else
0963852741
fixation
ADD
42
Le Havre
42LH
0611234991
Cor.
SEARCH
6
EXIT
EOF
*/
