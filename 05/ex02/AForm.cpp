/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:51:08 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 21:23:12 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AForm.hpp"

void assertValidGrade(int grade) {
	if (grade < 1)
		throw AForm::GradeTooHighException();
	if (grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm() {
	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(std::string name, const int requiredSigningGrade, const int requiredExecutionGrade)
	: requiredExecutionGrade(requiredExecutionGrade), requiredSigningGrade(requiredSigningGrade)
{
	std::cout << "AForm full constructor called" << std::endl;
	assertValidGrade(requiredExecutionGrade);
	assertValidGrade(requiredSigningGrade);
	this->isSigned = false;
	this->name = name;
}

AForm::AForm() : requiredExecutionGrade(1), requiredSigningGrade(1) {
	std::cout << "AForm default constructor called" << std::endl;
	isSigned = false;
	name = "";
}

AForm::AForm(const AForm &value) : requiredExecutionGrade(value.requiredExecutionGrade),
	requiredSigningGrade(value.requiredSigningGrade)
{
	std::cout << "AForm copy constructor called" << std::endl;
	isSigned = value.isSigned;
	name = value.name;
}

AForm& AForm::operator =(const AForm &value) {
	std::cout << "AForm assignment operator called" << std::endl;
	(void) value;
	return *this;
}

std::ostream& operator <<(std::ostream& os, const AForm& form) {
	os << "AForm {";
	os << "    name: " << form.getName() << ",\n";
	os << "    isSigned:" << form.getIsSigned() << ",\n";
	os << "    executionGrade: " << form.getRequiredExecutionGrade() << ",\n";
	os << "    signingGrade: " << form.getRequiredSigningGrade() << ",\n";
	os << "}";
	return os;
}

void AForm::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= getRequiredSigningGrade()) {
		isSigned = true;
	} else {
		throw AForm::GradeTooLowException();
	}
}

void AForm::execute(const Bureaucrat& executor) const {
	if (!isSigned)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getRequiredExecutionGrade())
		throw AForm::GradeTooLowException();
	_execute(executor);
}

int AForm::getRequiredExecutionGrade() const {
	return requiredExecutionGrade;
}

int AForm::getRequiredSigningGrade() const {
	return requiredSigningGrade;
}

std::string AForm::getName() const {
	return name;
}

bool AForm::getIsSigned() const {
	return isSigned;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "AForm::GradeTooHighException: grade too high (*ノ_<*)";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "AForm::GradeTooLowException: grade too low Σ(￣ロ￣lll)";
}

const char* AForm::FormNotSignedException::what() const throw() {
	return "AForm::GradeTooLowException: Form not signed ┬─┬ノ( º _ ºノ)";
}
