/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:44:48 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 21:20:30 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

Cat::~Cat() {
	std::cout << "Cat default destructor called" << std::endl;
	delete brain;
}

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat &value) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = value;
}

Cat& Cat::operator =(const Cat &value) {
	std::cout << "Cat assignment operator called" << std::endl;
	delete this->brain;
	this->brain = new Brain(*value.brain);
	this->type = value.type;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "meeeeeeeeeeow!" << std::endl;
}
