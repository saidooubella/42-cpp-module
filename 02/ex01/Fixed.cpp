/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:53:33 by soubella          #+#    #+#             */
/*   Updated: 2022/12/02 10:02:51 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

int Fixed::fractionWidth = 8;

void log(std::string message) {
	std::cout << message << std::endl;
}

Fixed::Fixed() {
	log("Default constructor called");
	value = 0;
}

Fixed::Fixed(const int value) {
	log("Int constructor called");
	this->value = value * (1 << fractionWidth);
}

Fixed::Fixed(const float value) {
	log("Float constructor called");
	this->value = roundf(value * (1 << fractionWidth));
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
	this->value = fixed.value;
	return *this;
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}

int Fixed::getRawBits(void) const {
	return value;
}

std::ostream& operator <<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}

float Fixed::toFloat(void) const {
	return (float) value / (1 << fractionWidth);
}

int Fixed::toInt(void) const {
	return getRawBits() >> fractionWidth;
}
