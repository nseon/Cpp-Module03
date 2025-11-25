/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:54:42 by nseon             #+#    #+#             */
/*   Updated: 2025/11/25 09:05:04 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a("Nico");
	ClapTrap b("Pierre");
	ClapTrap *c = new ScavTrap;

	a.attack(b.getName());
	b.takeDamage(static_cast<unsigned int>(a.getAtk_dmg()));
	a.guardGate();
	c->attack(a.getName());
	delete c;
	return (0);
}
