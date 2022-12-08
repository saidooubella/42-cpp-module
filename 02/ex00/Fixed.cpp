/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:53:33 by soubella          #+#    #+#             */
/*   Updated: 2022/12/01 18:13:48 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int Fixed::factionWidth = 8;

void log(std::string message) {
	std::cout << message << std::endl;
}

Fixed::Fixed() {
	log("Default constructor called");
	value = 0;
}

Fixed::~Fixed() {
	log("Destructor called");
}

Fixed::Fixed(const Fixed &fixed) {
	log("Copy constructor called");
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	log("Copy assignment operator called");
	this->value = fixed.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw) {
	log("setRawBits member function called");
	value = raw;
}

int Fixed::getRawBits(void) const {
	log("getRawBits member function called");
	return value;
}
