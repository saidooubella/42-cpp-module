/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:01:17 by soubella          #+#    #+#             */
/*   Updated: 2023/01/07 16:13:07 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"

int main(void) {
	
	Intern someRandomIntern;
	Form* rrf;
	
	rrf = someRandomIntern.makeForm(RobotomyRequest, "Bender");
	delete rrf;
	
	rrf = someRandomIntern.makeForm(ShrubberyCreation, "Todd");
	delete rrf;
	
	rrf = someRandomIntern.makeForm(RobotomyRequest, "Mark");
	delete rrf;
	
	rrf = someRandomIntern.makeForm("moon request", "Mark");
	
	return 0;
}
