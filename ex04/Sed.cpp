/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:47:11 by schiou            #+#    #+#             */
/*   Updated: 2024/07/10 14:38:48 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void Sed::input_to_string(std::string filename)
{
	std::string	line;

	this->infile.open(filename);
	if (!this->infile.is_open())
	{
		std::cout << "Error while opening file!" << std::endl;
		exit(0);
	}
	else
	{
		while(getline(infile, line, '\0'))
			this->str += line;
	}
	this->infile.close();
}

void Sed::output_to_file(std::string file, std::string sub, std::string rep)
{
	int pos = 0;
	int	flag = 0;

	this->outfile.open(file + ".replace");
	if (!this->outfile.is_open())
	{
		std::cout << "Error while oepning file!" << std::endl;
		exit(0);
	}
	else
	{
		for (int i = 0; i < (int)this->str.size() - 1; i++)
		{
			pos = this->str.find(sub, i);
			if (pos < 0 && !flag)
			{
				std::cout << "Error! That given substring is not find." << std::endl;
				exit(0);
			}	
			if (pos == i)
			{
				this->outfile << rep;
				i += sub.size() - 1;
				flag = 1;
			}
			else
				this->outfile << this->str[i];
		}
	}
	this->outfile.close();
}	
