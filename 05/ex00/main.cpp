/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:33:04 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 11:40:15 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cassert>

#include "Bureaucrat.hpp"

int main(void) {

	try {
		// Will throws
		Bureaucrat bureaucrat("Dan", 156);
	} catch(const std::exception& e) {
		std::cout << e.what() << '\n';
	}
	
	try {
		// Will throws
		Bureaucrat bureaucrat("Dan", 0);
	} catch(const std::exception& e) {
		std::cout << e.what() << '\n';
	}
	
	Bureaucrat bureaucrat("Dan", 5);
	
	bureaucrat.incrementGrade();
	std::cout << bureaucrat.getGrade() << std::endl;
	assert(bureaucrat.getGrade() == 4);

	bureaucrat.decrementGrade();
	std::cout << bureaucrat.getGrade() << std::endl;
	assert(bureaucrat.getGrade() == 5);
	
	bureaucrat.incrementGrade();
	bureaucrat.incrementGrade();
	bureaucrat.incrementGrade();
	bureaucrat.incrementGrade();
	
	try {
		// Will throws
		bureaucrat.incrementGrade();
	} catch(const std::exception& e) {
		std::cout << e.what() << '\n';
	}

	bureaucrat = Bureaucrat("Dan", 150);
	
	std::cout << bureaucrat << '\n';

	try {
		// Will throws
		bureaucrat.decrementGrade();
	} catch(const std::exception& e) {
		std::cout << e.what() << '\n';
	}
	
	return 0;
}
