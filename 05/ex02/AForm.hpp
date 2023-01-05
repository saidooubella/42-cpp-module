/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:50:56 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 14:51:34 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:
		const int			requiredExecutionGrade;
		const int			requiredSigningGrade;
		bool     			isSigned;
		const std::string	name;

	protected:
		virtual void _execute(const Bureaucrat& executor) const = 0;

	public:
		AForm();
		virtual ~AForm() = 0;
		void execute(const Bureaucrat& executor) const;
		AForm(const AForm &value);
		AForm(std::string name, const int requiredSigningGrade, const int requiredExecutionGrade);
		AForm& operator =(const AForm &value);
		void beSigned(Bureaucrat& bureaucrat);
		int getRequiredExecutionGrade() const;
		int getRequiredSigningGrade() const;
		std::string getName() const;
		void setIsSigned(bool isSigned);
		bool getIsSigned() const;

	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};

	class FormNotSignedException : public std::exception {
		public:
			const char* what() const throw();
	};

};

std::ostream& operator <<(std::ostream& os, const AForm& form);
