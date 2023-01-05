/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:44:24 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 14:54:54 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 145, 137) {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137) {
	std::cout << "ShrubberyCreationForm name constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &value) : Form(value) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator =(const ShrubberyCreationForm &value) {
	std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	this->setIsSigned(value.getIsSigned());
	return *this;
}

void ShrubberyCreationForm::_execute(const Bureaucrat& executor) const {
	
	std::fstream outfile(executor.getName() + "_shrubbery", std::ios::out | std::ios::trunc);
	
	if (!outfile.is_open()) {
		std::cout << "Error: Unable to create the output file." << std::endl;
		return;
	}
	
	outfile << '\n';
	outfile << "             ; ; ;\n";
	outfile << "       ;        ;  ;     ;;    ;\n";
	outfile << "    ;                 ;         ;  ;\n";
	outfile << "                    ;\n";
	outfile << "                   ;                ;;\n";
	outfile << "   ;          ;            ;              ;\n";
	outfile << "   ;            ';,        ;               ;\n";
	outfile << "   ;              'b      *\n";
	outfile << "    ;              '$    ;;                ;;\n";
	outfile << "   ;    ;           $:   ;:               ;\n";
	outfile << " ;;      ;  ;;      *;  @):        ;   ; ;\n";
	outfile << "              ;     :@,@):   ,;**:'   ;\n";
	outfile << "  ;      ;,         :@@*: ;;**'      ;   ;\n";
	outfile << "           ';o;    ;:(@';@*\"'  ;\n";
	outfile << "   ;  ;       'bq,;;:,@@*'   ,*      ;  ;\n";
	outfile << "              ,p$q8,:@)'  ;p*'      ;\n";
	outfile << "       ;     '  ; '@@Pp@@*'    ;  ;\n";
	outfile << "        ;  ; ;;    Y7'.'     ;  ;\n";
	outfile << "                  :@):.\n";
	outfile << "                 .:@:'.\n";
	outfile << "               .::(@:.\n";
}
