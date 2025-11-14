/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:54:42 by nseon             #+#    #+#             */
/*   Updated: 2025/11/14 10:14:50 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ScavTrap Devan("Devan");
	ClapTrap Pierre("Pierre");
	FragTrap Nico("Nico");	

	std::cout << std::endl;
	
	for (int i = 0; i < 12; i++)
		Pierre.attack(Nico.getName());
	Nico.highFivesGuys();
	std::cout << std::endl;
	
	for (int i = 0; i < 5; i++)
	{
		Devan.attack(Nico.getName());
		Nico.takeDamage(Devan.getAtk_dmg());
	}
	Devan.beRepaired(50);
	Nico.beRepaired(50);
	Devan.guardGate();
	std::cout << std::endl;

	return (0);
}
