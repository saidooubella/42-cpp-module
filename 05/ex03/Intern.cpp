/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:45:40 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 21:33:55 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include "Intern.hpp"

// ------------------------------------------------------------------------------

#define FormBuildersCount 3

typedef struct {
	std::string name;
	Form* 		(*builder)(std::string name);
} FormBuilder;

Form* buildPresidentialPardonForm(std::string name) { return new PresidentialPardonForm(name); }
Form* buildShrubberyCreationForm(std::string name) { return new ShrubberyCreationForm(name); }
Form* buildRobotomyRequestForm(std::string name) { return new RobotomyRequestForm(name); }

FormBuilder formBuilders[FormBuildersCount] = {
	{ .name = PresidentialPardon, .builder = buildPresidentialPardonForm },
	{ .name = ShrubberyCreation, .builder = buildShrubberyCreationForm },
	{ .name = RobotomyRequest, .builder = buildRobotomyRequestForm },
};

// ------------------------------------------------------------------------------

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &value) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = value;
}

Intern& Intern::operator =(const Intern &value) {
	std::cout << "Intern assignment operator called" << std::endl;
	(void) value;
	return *this;
}

Form* Intern::makeForm(std::string formName, std::string formTarget) {

	for (size_t i = 0; i < FormBuildersCount; i++) {
		if (formBuilders[i].name == formName) {
			std::cout << "Intern creates " << formName << std::endl;
			return (formBuilders[i].builder)(formTarget);
		}
	}

	std::cout << "'" << formName << "' form is not supported." << std::endl;
	return NULL;
}
