/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:11:17 by soubella          #+#    #+#             */
/*   Updated: 2023/01/03 13:15:10 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
	this->name = "";
}

ClapTrap::ClapTrap(std::string name, unsigned int energyPoints, unsigned int attackDamage, unsigned int hitPoints) {
	std::cout << "ClapTrap full constructor called" << std::endl;
	this->attackDamage = attackDamage;
	this->energyPoints = energyPoints;
	this->hitPoints = hitPoints;
	this->name = name;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap name constructor called" << std::endl;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &value) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = value;
}

ClapTrap& ClapTrap::operator =(const ClapTrap &value) {
	std::cout << "ClapTrap copy assignment oprator called" << std::endl;
	this->attackDamage = value.attackDamage;
	this->energyPoints = value.energyPoints;
	this->hitPoints = value.hitPoints;
	this->name = value.name;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (energyPoints == 0)
		return;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (energyPoints == 0)
		return;
	std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
	if (amount > hitPoints)
		amount = hitPoints;
	hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints == 0)
		return;
	std::cout << "ClapTrap " << name << " earned " << amount << " points of repaire!" << std::endl;
	hitPoints += amount;
	energyPoints -= 1;
}
