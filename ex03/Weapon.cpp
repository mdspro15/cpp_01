/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:22:18 by schiou            #+#    #+#             */
/*   Updated: 2024/07/09 13:53:48 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string value)
{
	this->type = value;
}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string newvalue)
{
	this->type = newvalue;
}	
