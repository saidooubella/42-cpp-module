/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:55:21 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 18:43:05 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#include "Character.hpp"

Character::~Character() {

	std::cout << "Character default destructor called" << std::endl;

	for (int i = 0; i < 4; i++) {
		if (materials[i] == NULL)
			continue;
		delete materials[i];
	}

	delete [] materials;
}

Character::Character(std::string name) {
	std::cout << "Character name constructor called" << std::endl;
	this->materials = new AMateria*[4];
	this->name = name;
	for (int i = 0; i < 4; i++) {
		this->materials[i] = NULL;
	}
}

Character::Character() {
	std::cout << "Character default constructor called" << std::endl;
	this->materials = new AMateria*[4];
	this->name = "";
	for (int i = 0; i < 4; i++) {
		this->materials[i] = NULL;
	}
}

Character::Character(const Character &value) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = value;
}

Character& Character::operator =(const Character &value) {
	
	std::cout << "Character assignment operator called" << std::endl;
	
	name = value.name;
	
	for (int i = 0; i < 4; i++) {
		if (materials[i] == NULL)
			continue;
		delete materials[i];
	}

	delete [] materials;

	materials = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		const AMateria *material = value.materials[i];
		materials[i] = material == NULL ? NULL : value.materials[i]->clone();
	}
	
	return *this;
}

const std::string& Character::getName() const {
	return name;
}

void Character::use(int idx, ICharacter& target) {
	if (0 <= idx && idx < 4 && materials[idx] != NULL) {
		materials[idx]->use(target);
	}
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		const AMateria *material = materials[i];
		if (material == NULL) {
			materials[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (0 <= idx && idx < 4 && materials[idx] != NULL) {
		materials[idx] = NULL;
	}
}
