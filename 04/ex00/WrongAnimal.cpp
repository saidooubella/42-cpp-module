/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:36:34 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 20:03:23 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "Unspecified";
}

WrongAnimal::WrongAnimal(const WrongAnimal &value) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = value;
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal &value) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->type = value.type;
	return *this;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal make sound what Wronganimal?" << std::endl;
}
