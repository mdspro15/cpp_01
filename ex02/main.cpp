/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:06:52 by schiou            #+#    #+#             */
/*   Updated: 2024/06/27 17:18:40 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	//Print memory address of the string value
	std::cout << "Memory address of the string value : " << &str << std::endl;

	//Print memory address held by stringPTR
	std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;

	//Print memory address held by stringREF
	std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "Value of the string variable : " << str << std::endl;

	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;

	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;

	return (0);
}
