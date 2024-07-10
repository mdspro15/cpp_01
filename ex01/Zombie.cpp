/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:01:10 by schiou            #+#    #+#             */
/*   Updated: 2024/06/27 17:01:16 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Object is created now." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " has been destroyed." << std::endl;
}

void Zombie::setname(std::string name)
{
	this->_name = name;
}	

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}	
