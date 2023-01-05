/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:47:28 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 14:54:47 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("", 25, 5) {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5) {
	std::cout << "PresidentialPardonForm name constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &value) : Form(value) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator =(const PresidentialPardonForm &value) {
	std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	this->setIsSigned(value.getIsSigned());
	return *this;
}

void PresidentialPardonForm::_execute(const Bureaucrat& executor) const {
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
