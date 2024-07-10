/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:00:53 by schiou            #+#    #+#             */
/*   Updated: 2024/06/27 17:01:34 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();
		void	setname(std::string name);
		void	announce();
};

Zombie*	zombieHorde(int N, std::string name);

#endif
