/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:44:48 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 20:01:27 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongCat.hpp"

WrongCat::~WrongCat() {
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &value) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = value;
}

WrongCat& WrongCat::operator =(const WrongCat &value) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	this->type = value.type;
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "meeeeeeeeeeow!" << std::endl;
}
