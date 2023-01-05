/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:51:28 by soubella          #+#    #+#             */
/*   Updated: 2023/01/04 13:24:16 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cure.hpp"

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &value) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = value;
}

Cure& Cure::operator =(const Cure &value) {
	std::cout << "Cure assignment operator called" << std::endl;
	(void) value;
	return *this;
}

void Cure::use(ICharacter& target) const {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone() const {
	return new Cure();
}
