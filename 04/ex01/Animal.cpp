/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:36:34 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 20:03:34 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

Animal::~Animal() {
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Unspecified";
}

Animal::Animal(const Animal &value) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = value;
}

Animal& Animal::operator =(const Animal &value) {
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = value.type;
	return *this;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound(void) const {
	std::cout << "Animal make sound what animal?" << std::endl;
}
