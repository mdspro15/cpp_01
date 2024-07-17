/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:59:11 by schiou            #+#    #+#             */
/*   Updated: 2024/07/17 14:18:55 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **argv)
{
	if (ac != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		Harl	h;
		h.complain(argv[1]);
	}
	return (0);
}
