/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:53:33 by soubella          #+#    #+#             */
/*   Updated: 2022/12/02 10:48:57 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

int Fixed::fractionWidth = 8;

Fixed::~Fixed() {}

Fixed::Fixed() {
	value = 0;
}

Fixed::Fixed(const int value) {
	this->value = value * (1 << fractionWidth);
}

Fixed::Fixed(const float value) {
	this->value = roundf(value * (1 << fractionWidth));
}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed& Fixed::operator =(const Fixed &fixed) {
	this->value = fixed.value;
	return *this;
}

bool   Fixed::operator >(const Fixed &other) const {
	return value > other.value;
}

bool   Fixed::operator >=(const Fixed &other) const {
	return value >= other.value;
}

bool   Fixed::operator <(const Fixed &other) const {
	return value < other.value;
}

bool   Fixed::operator <=(const Fixed &other) const {
	return value <= other.value;
}

bool   Fixed::operator ==(const Fixed &other) const {
	return value == other.value;
}

bool   Fixed::operator !=(const Fixed &other) const {
	return value != other.value;
}

Fixed  Fixed::operator +(const Fixed &other) {
	Fixed fixed;
	fixed.setRawBits(value + other.value);
	return fixed;
}

Fixed  Fixed::operator -(const Fixed &other) {
	Fixed fixed;
	fixed.setRawBits(value - other.value);
	return fixed;
}

Fixed  Fixed::operator *(const Fixed &other) {
	Fixed fixed;
	fixed.setRawBits((value * other.value) >> fractionWidth);
	return fixed;
}

Fixed  Fixed::operator /(const Fixed &other) {
	Fixed fixed;
	fixed.setRawBits(value / (other.value >> fractionWidth));
	return fixed;
}

Fixed& Fixed::operator ++(void) {
	++value;
	return *this;
}

Fixed  Fixed::operator ++(int) {
	Fixed temp = *this;
	value++;
	return temp;
}

Fixed& Fixed::operator --(void) {
	--value;
	return *this;
}

Fixed  Fixed::operator --(int) {
	Fixed temp = *this;
	value--;
	return temp;
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
	return value >> fractionWidth;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
	return (lhs > rhs) ? rhs : lhs;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
	return (lhs > rhs) ? rhs : lhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
	return (lhs < rhs) ? rhs : lhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
	return (lhs < rhs) ? rhs : lhs;
}
