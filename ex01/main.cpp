/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:54:42 by nseon             #+#    #+#             */
/*   Updated: 2025/11/12 12:02:15 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a;
	ClapTrap b("Nico", 50, 100, 7);

	b.attack(a.getName());
	a.takeDamage(static_cast<unsigned int>(b.getAtk_dmg()));
	return (0);
}
