/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:18:44 by nseon             #+#    #+#             */
/*   Updated: 2025/11/20 09:53:58 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called " << std::endl;
	_name = "Default";
	ClapTrap::_name = "Default_clap_name";
	_hit_pts = FragTrap::_hit_pts;
	_energy_pts = ScavTrap::_energy_pts;
	_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap default constructor called " << std::endl;
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hit_pts = FragTrap::_hit_pts;
	_energy_pts = ScavTrap::_energy_pts;
	_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(DiamondTrap &model) : ClapTrap(model)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &model)
{
	if (this != &model)
		ClapTrap::operator=(model);
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called " << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name : " << _name << "\nClapTrap name : " << ClapTrap::_name << std::endl;
}
