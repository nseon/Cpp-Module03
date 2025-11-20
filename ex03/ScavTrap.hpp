/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 08:58:06 by nseon             #+#    #+#             */
/*   Updated: 2025/11/17 14:33:23 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap {
	public:
		ScavTrap();
		ScavTrap(ScavTrap &model);
		ScavTrap(std::string name);
		ScavTrap &operator=(const ScavTrap &model);
		~ScavTrap();
		
		void guardGate();
		void attack(const std::string& target);
};

#endif
