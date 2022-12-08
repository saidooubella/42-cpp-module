/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:51:26 by soubella          #+#    #+#             */
/*   Updated: 2022/12/02 11:21:34 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::~Point() {}

Point::Point() {
	this->x = Fixed();
	this->y = Fixed();
}

Point::Point(Fixed x, Fixed y) {
	this->x = x;
	this->y = y;
}

Point::Point(const Point &value) {
	*this = value;
}

Point& Point::operator =(const Point &value) {
	this->x = value.x;
	this->y = value.y;
	return *this;
}

bool Point::operator ==(const Point &that) const {
	return this->x == that.x && this->y == that.y;
}

Fixed Point::getX() {
	return x;
}

Fixed Point::getY() {
	return y;
}
