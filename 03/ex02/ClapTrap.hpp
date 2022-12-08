/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:19:25 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:44:40 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ClapTrap {
	
	protected:
		unsigned int  energyPoints;
		unsigned int  attackDamage;
		unsigned int  hitPoints;
		std::string   name;

	public:
		ClapTrap();
		virtual ~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, unsigned int energyPoints, unsigned int attackDamage, unsigned int hitPoints);
		ClapTrap(const ClapTrap &value);
		ClapTrap& operator =(const ClapTrap &value);
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};
