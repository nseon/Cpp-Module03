/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:54:42 by nseon             #+#    #+#             */
/*   Updated: 2025/11/20 09:54:14 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap Nico("Nico");
	DiamondTrap Nico2(Nico);
	
	Nico2.attack("Pierre");
	std::cout << Nico.getAtk_dmg() << std::endl;
	Nico.whoAmI();
	return (0);
}
