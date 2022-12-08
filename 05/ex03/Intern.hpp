/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:40:56 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 21:33:55 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "Form.hpp"

#define PresidentialPardon "presidential pardon request"
#define ShrubberyCreation "shrubbery creation"
#define RobotomyRequest "robotomy request"

class Intern {

	public:
		Intern();
		~Intern();
		Intern(const Intern &value);
		Intern& operator =(const Intern &value);
		Form* makeForm(std::string formName, std::string formTarget);

};
