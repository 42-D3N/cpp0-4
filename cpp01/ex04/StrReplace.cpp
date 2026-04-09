/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-pape <tle-pape@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 06:15:34 by tle-pape          #+#    #+#             */
/*   Updated: 2025/09/15 06:15:34 by tle-pape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StrReplace.hpp"

StrReplace::StrReplace(void) : filename(""), original(""), c_to_find(""), \
	c_to_insert(""), replaced("")
{}

StrReplace::StrReplace(const StrReplace &other)
{
	filename = other.filename;
	original = other.original;
	c_to_find = other.c_to_find;
	c_to_insert = other.c_to_insert;
	replaced = other.replaced;
}

StrReplace &StrReplace::operator=(const StrReplace &other)
{
	if (this != &other)
	{
		filename = other.filename;
		original = other.original;
		c_to_find = other.c_to_find;
		c_to_insert = other.c_to_insert;
		replaced = other.replaced;
	}
	return (*this);
}

StrReplace::~StrReplace(void)
{
	if (file.is_open() == true)
	{
		file.close();
		// std::cout << "Infile closed." << std::endl;
	}
}

StrReplace::StrReplace(std::string fname, std::string to_find, \
	std::string to_insert) : filename(fname), original(""), \
	c_to_find(to_find), c_to_insert(to_insert)
{
	file.open(filename.c_str(), std::ios::in);
}

bool	StrReplace::isOpen()
{
	return (file.is_open());
}

bool	StrReplace::replace()
{
	long int pos = 0, old_pos = 0, total = 0;
	static std::string tmp = "";
	std::ofstream outfile;

	filename.append(".replace");
	outfile.open(filename.c_str(), std::ios::out);
	if (outfile.is_open() == false)
	{
		std::cout << ERROPEN << std::endl;
		return (false);
	}
	while (getline(file, tmp))
	{
		original.append(tmp);
		original.append("\n");
		total++;
	}
	if (total == 0)
		return (false);
	total = original.size();
	total--;
	original.erase(total, 1);
	while (pos < total)
	{
		pos = original.find(c_to_find, pos);
		replaced.append(original.substr(old_pos, pos - old_pos));
		if (pos == -1)
			break;
		replaced.append(c_to_insert);
		pos += c_to_find.size();
		old_pos = pos;
	}
	outfile << replaced << std::endl;
	outfile.close();
	return (true);
}
