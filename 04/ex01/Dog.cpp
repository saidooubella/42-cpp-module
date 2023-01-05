/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:45:11 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 21:20:25 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"
#include "Dog.hpp"

Dog::~Dog() {
	std::cout << "Dog default destructor called" << std::endl;
	delete brain;
}

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(const Dog &value) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = value;
}

Dog& Dog::operator =(const Dog &value) {
	std::cout << "Dog assignment operator called" << std::endl;
	delete this->brain;
	this->brain = new Brain(*value.brain);
	this->type = value.type;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "woof woof!" << std::endl;
}
