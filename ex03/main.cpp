/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:21:49 by schiou            #+#    #+#             */
/*   Updated: 2024/07/09 13:54:05 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
//HumanA uses a reference to Weapon object
//HumanB uses a pointer to Weapon object
int	main()
{
  {	
	Weapon	club = Weapon("crude spiked club");
   	HumanA	bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
  }
  	std::cout << std::endl;
  {
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
  }	
	return (0);
}