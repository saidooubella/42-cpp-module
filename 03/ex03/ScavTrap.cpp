/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 09:47:12 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 11:28:48 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap("", 50, 20, 100) {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 50, 20, 100) {
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &value) : ClapTrap(value) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (energyPoints == 0)
		return;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints -= 1;
}
