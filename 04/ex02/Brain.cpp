/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:45:51 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 21:47:12 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

Brain::~Brain() {
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &value) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = value;
}

Brain& Brain::operator =(const Brain &value) {
	std::cout << "Brain assignment operator called" << std::endl;
	for (size_t i = 0; i < 100; i++) {
		this->ideas[i] = value.ideas[i];
	}
	return *this;
}
