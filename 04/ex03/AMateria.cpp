/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:43:24 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 21:35:27 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"

AMateria::~AMateria() {
	std::cout << "AMateria default destructor called" << std::endl;
}

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &value) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = value;
}

AMateria& AMateria::operator =(const AMateria &value) {
	std::cout << "AMateria assignment operator called" << std::endl;
	(void) value;
	return *this;
}

const std::string& AMateria::getType() const {
	return type;
}
