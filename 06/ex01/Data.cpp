/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:49:33 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 15:56:07 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Data.hpp"

Data::~Data() {
	std::cout << "Data destructor called" << std::endl;
}

Data::Data(std::string value, int key) : value(value), key(key) {
	std::cout << "string constructor called" << std::endl;
}

Data::Data() : value(""), key(0) {
	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(const Data &value) : value(value.value), key(value.key) {
	std::cout << "Data copy constructor called" << std::endl;
}

Data& Data::operator =(const Data &value) {
	std::cout << "Data assignment operator called" << std::endl;
	(void) value;
	return *this;
}
