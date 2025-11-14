/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:30:58 by nseon             #+#    #+#             */
/*   Updated: 2025/11/14 09:57:47 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &model) : ClapTrap(model)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
	std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &model)
{
	if (this != &model)
		ClapTrap::operator=(model);
	std::cout << "FragTrap assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (!_hit_pts)
		std::cout << "FragTrap " << _name << " is dead" << std::endl;
	std::cout << "FragTrap " << _name << " request a hight-fives !" << std::endl;
}
