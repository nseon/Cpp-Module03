/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:55:06 by nseon             #+#    #+#             */
/*   Updated: 2025/11/07 17:53:47 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {
	private:
		std::string _name;
		int	_hit_pts;
		int	_energy_pts;
		int	_attack_dmg;
	public:
		ClapTrap();
		ClapTrap(std::string name, int hit_pts, int energy_pts, int atk_dmg);
		ClapTrap(ClapTrap &model);
		ClapTrap &operator=(const ClapTrap &model);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName() const;
};

#endif
