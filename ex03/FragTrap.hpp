/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:31:06 by nseon             #+#    #+#             */
/*   Updated: 2025/11/17 14:33:19 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {
	public:
		FragTrap();
		FragTrap(FragTrap &model);
		FragTrap(std::string name);
		FragTrap &operator=(FragTrap const &model);
		~FragTrap();

		void highFivesGuys(void);
};

#endif
