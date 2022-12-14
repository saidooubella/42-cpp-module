/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:11:54 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 14:13:22 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat() : name("") {
	std::cout << "Bureaucrat default constructor called" << std::endl;
	grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
	std::cout << "Bureaucrat (Name & Grade) constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &value) : name(value.name), grade(value.grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator =(const Bureaucrat &value) {
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	this->grade = value.getGrade();
	return *this;
}

std::ostream& operator <<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}

const std::string Bureaucrat::getName() const {
	return name;
}

void Bureaucrat::incrementGrade() {
	if (grade < 2)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade() {
	if (grade > 149)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::signForm(AForm &form) {
	if (form.getIsSigned()) {
		std::cout << getName() << " signed " << form.getName() << std::endl;
	} else {
		std::cout << getName() << " couldn't sign " << form.getName() << " because form isn't signed" << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm& form) {
	try {
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << '\n';
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat::GradeTooHighException: grade too high (*???_<*)";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat::GradeTooLowException: grade too low ??(?????????lll)";
}
