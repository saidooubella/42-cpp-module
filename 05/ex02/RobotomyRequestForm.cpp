/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:06:23 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 16:34:56 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45) {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45) {
	std::cout << "RobotomyRequestForm name constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &value) : AForm(value) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator =(const RobotomyRequestForm &value) {
	std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
	(void) value;
	return *this;
}

void RobotomyRequestForm::_execute(const Bureaucrat& executor) const {
	std::cout << "drrrrrrrrrrrrrrrrrrrrr!" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << executor.getName() << " has been robotomized!" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}
