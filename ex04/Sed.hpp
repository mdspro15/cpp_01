/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:43:21 by schiou            #+#    #+#             */
/*   Updated: 2024/07/10 14:15:19 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class	Sed
{
	private:
		std::ifstream	infile;
		std::ofstream	outfile;
		std::string		str;
	public:
		Sed() {}
		~Sed(){}
		void	input_to_string(std::string filename);
		void	output_to_file(std::string file, std::string sub, std::string rep);
};

#endif
