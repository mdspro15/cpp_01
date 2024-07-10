/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:22:50 by schiou            #+#    #+#             */
/*   Updated: 2024/07/09 13:53:25 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA has been created." << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA has been destroyed." << std::endl;
}

void HumanA::attack()
{
    std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}
