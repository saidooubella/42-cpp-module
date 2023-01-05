/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:51:08 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 21:23:14 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Form.hpp"

void assertValidGrade(int grade) {
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(std::string name, const int requiredSigningGrade, const int requiredExecutionGrade)
	: requiredExecutionGrade(requiredExecutionGrade), requiredSigningGrade(requiredSigningGrade), name(name)
{
	std::cout << "Form full constructor called" << std::endl;
	assertValidGrade(requiredExecutionGrade);
	assertValidGrade(requiredSigningGrade);
	this->isSigned = false;
}

Form::Form() : requiredExecutionGrade(1), requiredSigningGrade(1), name("") {
	std::cout << "Form default constructor called" << std::endl;
	isSigned = false;
}

Form::Form(const Form &value) : requiredExecutionGrade(value.requiredExecutionGrade),
	requiredSigningGrade(value.requiredSigningGrade), name(value.name)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator =(const Form &value) {
	std::cout << "Form assignment operator called" << std::endl;
	this->isSigned = value.getIsSigned();
	return *this;
}

std::ostream& operator <<(std::ostream& os, const Form& form) {
	os << "Form {";
	os << "    name: " << form.getName() << ",\n";
	os << "    isSigned:" << form.getIsSigned() << ",\n";
	os << "    executionGrade: " << form.getRequiredExecutionGrade() << ",\n";
	os << "    signingGrade: " << form.getRequiredSigningGrade() << ",\n";
	os << "}";
	return os;
}

void Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= getRequiredSigningGrade()) {
		isSigned = true;
	} else {
		throw Form::GradeTooLowException();
	}
}

void Form::execute(const Bureaucrat& executor) const {
	if (!isSigned)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > getRequiredExecutionGrade())
		throw Form::GradeTooLowException();
	_execute(executor);
}

int Form::getRequiredExecutionGrade() const {
	return requiredExecutionGrade;
}

int Form::getRequiredSigningGrade() const {
	return requiredSigningGrade;
}

std::string Form::getName() const {
	return name;
}

void Form::setIsSigned(bool isSigned) {
	this->isSigned = isSigned;
}

bool Form::getIsSigned() const {
	return isSigned;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Form::GradeTooHighException: grade too high (*ノ_<*)";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Form::GradeTooLowException: grade too low Σ(￣ロ￣lll)";
}

const char* Form::FormNotSignedException::what() const throw() {
	return "Form::GradeTooLowException: Form not signed ┬─┬ノ( º _ ºノ)";
}
