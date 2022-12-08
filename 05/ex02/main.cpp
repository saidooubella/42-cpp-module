/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:01:17 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:20:36 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main(void) {
	
	Bureaucrat b("Mitch", 5);
	RobotomyRequestForm rrf("RobotomyRequestForm");
	ShrubberyCreationForm scf("ShrubberyCreationForm");
	
	rrf.beSigned(b);
	b.signForm(rrf);
	rrf.execute(b);
	
	scf.beSigned(b);
	b.signForm(scf);
	scf.execute(b);
	
	return 0;
}
