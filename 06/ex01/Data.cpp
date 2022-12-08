/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:49:33 by soubella          #+#    #+#             */
/*   Updated: 2022/12/06 18:40:11 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Data.hpp"

Data::~Data() {
	std::cout << "Data destructor called" << std::endl;
}

Data::Data() {
	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(const Data &value) {
	std::cout << "Data copy constructor called" << std::endl;
	*this = value;
}

Data& Data::operator =(const Data &value) {
	std::cout << "Data assignment operator called" << std::endl;
	(void) value;
	return *this;
}
