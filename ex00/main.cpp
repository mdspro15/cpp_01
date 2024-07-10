/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:41:41 by schiou            #+#    #+#             */
/*   Updated: 2024/06/27 16:55:19 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	//Create object on stack
	randomChump("STACK");

	std::cout << std::endl;

	//Create object on heap
	Zombie* zombie2 = newZombie("HEAP");
	zombie2->announce();

	delete zombie2;
	zombie2 = nullptr;

	return (0);
}
