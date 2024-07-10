/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:55:25 by schiou            #+#    #+#             */
/*   Updated: 2024/07/10 13:56:31 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **argv)
{
	Sed	s;

	if (ac != 4)
	{
		std::cout << "Error! Please pass right arguments." << std::endl;
		return (0);
	}
	else
	{
		s.input_to_string(argv[1]);
		s.output_to_file(argv[1], argv[2], argv[3]);
	}	
	return (0);
}
