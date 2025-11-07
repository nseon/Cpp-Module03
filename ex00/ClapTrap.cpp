/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:55:09 by nseon             #+#    #+#             */
/*   Updated: 2025/11/07 17:54:21 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hit_pts, int energy_pts, int atk_dmg) : _name(name), _hit_pts(hit_pts), _energy_pts(energy_pts), _attack_dmg(atk_dmg)
{
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &model) : _name(model._name), _hit_pts(model._hit_pts), _energy_pts(model._energy_pts), _attack_dmg(model._attack_dmg)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &model)
{
	if (this != &model)
	{
		_name = model._name;
		_hit_pts = model._hit_pts;
		_energy_pts = model._energy_pts;
		_hit_pts = model._hit_pts;
	}
	std::cout << "Fixed copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy_pts)
	{
		_energy_pts -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_dmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " has no energy points left..." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hit_pts -= amount;
	std::cout << "ClapTrap " << _name << " take " << amount << " damage. He now has " << _hit_pts << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_pts)
	{
		_energy_pts -= 1;
		_hit_pts += amount;
		std::cout << "ClapTrap " << _name << " has been repaired by " << amount << " hit points. He now has " << _hit_pts << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " has no energy points left..." << std::endl;
}

std::string ClapTrap::getName() const
{
	return (_name);
}
