/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 09:55:55 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:45:20 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		virtual ~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &value);
		virtual void attack(const std::string& target);
		void guardGate(void);
};
