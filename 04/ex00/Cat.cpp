/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:44:48 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 18:01:05 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

Cat::~Cat() {
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &value) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = value;
}

Cat& Cat::operator =(const Cat &value) {
	std::cout << "Cat assignment operator called" << std::endl;
	this->type = value.type;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "meeeeeeeeeeow!" << std::endl;
}
