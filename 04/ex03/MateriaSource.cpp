/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:16:55 by soubella          #+#    #+#             */
/*   Updated: 2023/01/04 13:31:36 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource() {
	
	std::cout << "MateriaSource default destructor called" << std::endl;
	
	for (int i = 0; i < 4; i++) {
		if (materials[i] == NULL)
			continue;
		delete materials[i];
	}

	delete [] materials;
}

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	materials = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		this->materials[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &value) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = value;
}

MateriaSource& MateriaSource::operator =(const MateriaSource &value) {
	
	std::cout << "MateriaSource assignment operator called" << std::endl;
	
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

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		const AMateria *material = materials[i];
		if (material == NULL) {
			materials[i] = m->clone();
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < 4; i++) {
		const AMateria *material = materials[i];
		if (material != NULL && material->getType() == type) {
			return material->clone();
		}
	}
	return NULL;
}
