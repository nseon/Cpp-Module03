/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 08:57:52 by nseon             #+#    #+#             */
/*   Updated: 2025/11/14 09:57:42 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_hit_pts = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &model) : ClapTrap(model)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit_pts = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &model)
{
	if (this != &model)
		ClapTrap::operator=(model);
	std::cout << "ScavTrap assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	if (!_hit_pts)
		std::cout << "ScavTrap " << _name << " is dead" << std::endl;
	std::cout << "ScavTrap " << _name << " is in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!_hit_pts)
		std::cout << "ScavTrap " << _name << " is dead" << std::endl;
	if (_energy_pts)
	{
		--_energy_pts;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_dmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " has no energy points left..." << std::endl;
}
