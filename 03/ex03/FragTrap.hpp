/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:21:55 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:45:14 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		virtual ~FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &value);
		virtual void attack(const std::string& target);
		void highFivesGuys(void);
};
