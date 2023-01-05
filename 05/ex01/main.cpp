/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:33:04 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 14:29:05 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cassert>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	
	Bureaucrat bureaucrat("Dan", 5);
	
	Form form("form", 1, 1);
	
	try {
		// Will throw
		form.beSigned(bureaucrat);
	} catch (const std::exception& e) {
		std::cout << e.what() << '\n';
	}
	
	
	bureaucrat = Bureaucrat("Dan", 1);
	
	form.beSigned(bureaucrat);
	bureaucrat.signForm(form);
	
	return 0;
}
