/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:47:05 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 21:47:34 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Ice.hpp"

Ice::~Ice() {
	std::cout << "Ice default destructor called" << std::endl;
}

Ice::Ice() {
	std::cout << "Ice default constructor called" << std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice &value) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = value;
}

Ice& Ice::operator =(const Ice &value) {
	std::cout << "Ice assignment operator called" << std::endl;
	(void) value;
	return *this;
}

void Ice::use(ICharacter& target) const {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice* Ice::clone() const {
	return new Ice();
}
