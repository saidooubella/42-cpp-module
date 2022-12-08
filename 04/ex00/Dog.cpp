/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:45:11 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 18:01:08 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Dog.hpp"

Dog::~Dog() {
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &value) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = value;
}

Dog& Dog::operator =(const Dog &value) {
	std::cout << "Dog assignment operator called" << std::endl;
	this->type = value.type;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "woof woof!" << std::endl;
}
