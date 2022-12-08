/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:24:51 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 10:49:31 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "FragTrap.hpp"

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("", 100, 30, 100) {
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 30, 100) {
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &value) : ClapTrap(value) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "High Five Guys! (=゜ω゜)人(゜ ω゜=)" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (energyPoints == 0)
		return;
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints -= 1;
}
