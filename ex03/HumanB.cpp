/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:23:14 by schiou            #+#    #+#             */
/*   Updated: 2024/07/09 13:53:09 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "HumanB has been destroyed." << std::endl;
}
//Takes a reference to a weapon object and assign the address of the reference.
void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}	
void HumanB::attack()
{
	std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
}	
