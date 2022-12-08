/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:46:52 by soubella          #+#    #+#             */
/*   Updated: 2022/12/05 21:06:49 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name", 50, 30, 100) {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 50, 30, 100) {
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &value) : ClapTrap(value) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->name = value.name;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "僕の名前は" << name << "そして僕のスーパークラスの名前は" << ClapTrap::name << "ですね。" << std::endl;
}
